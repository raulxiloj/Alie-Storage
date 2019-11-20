import { Component, OnInit} from '@angular/core';
import { ActivatedRoute } from '@angular/router'
import { DataApiService } from 'src/app/services/data-api.service';
import { MatTreeFlatDataSource, MatTreeFlattener } from '@angular/material/tree';
import { of as observableOf } from 'rxjs';
import { FlatTreeControl } from '@angular/cdk/tree';
import { ToastrService } from 'src/app/services/toastr.service';
import { MatDialog } from '@angular/material'
import { ModComponent } from 'src/app/components/modal/mod/mod.component'
import * as jsPDF from 'jspdf';



/** File node data with nested structure. */
export interface FileNode {
  name: string;
  type: string;
  children?: FileNode[];
}

/** Flat node with expandable and level information */
export interface TreeNode {
  name: string;
  type: string;
  level: number;
  expandable: boolean;
}

@Component({
  selector: 'app-file-system',
  templateUrl: './file-system.component.html',
  styleUrls: ['./file-system.component.css']
})
export class FileSystemComponent implements OnInit {

  /** The TreeControl controls the expand/collapse state of tree nodes.  */
  treeControl: FlatTreeControl<TreeNode>;

  /** The TreeFlattener is used to generate the flat list of items from hierarchical data. */
  treeFlattener: MatTreeFlattener<FileNode, TreeNode>;

  /** The MatTreeFlatDataSource connects the control and flattener to provide data. */
  dataSource: MatTreeFlatDataSource<FileNode, TreeNode>;

  current: TreeNode = null;
  id: string;
  name: string;
  folders: any = null;
  file: any = null;
  contentFile: string = null;

  constructor(private activateRoute: ActivatedRoute, private dataApi: DataApiService, private toastr: ToastrService, public dialog: MatDialog) {
    this.treeFlattener = new MatTreeFlattener(
      this.transformer,
      this.getLevel,
      this.isExpandable,
      this.getChildren);
  
      this.treeControl = new FlatTreeControl<TreeNode>(this.getLevel, this.isExpandable);
      this.dataSource = new MatTreeFlatDataSource(this.treeControl, this.treeFlattener);
  }

  ngOnInit() {
    this.activateRoute.params.subscribe( params => {
      this.id = params['id'];
      this.dataApi.getFileSystem(this.id)
        .subscribe(
          res => {
            this.dataSource.data = this.parseData(res);
          },
          error => console.log(error)
        )
    });
  }

   /** Transform the data to something the tree can read. */
  transformer(node: FileNode, level: number) {
    return {
      name: node.name,
      type: node.type,
      level: level,
      expandable: !!node.children
    };
  }

 /** Get the level of the node */
  getLevel(node: TreeNode) {
    return node.level;
  }

  /** Return whether the node is expanded or not. */
  isExpandable(node: TreeNode) {
    return node.expandable;
  };

  /** Get the children for the node. */
  getChildren(node: FileNode) {
    return observableOf(node.children);
  }

  /** Get whether the node has children or not. */
  hasChild(index: number, node: TreeNode){
    return node.expandable;
  }

  selectNode(node: TreeNode){
    this.current = node;
    let id:number = parseInt(this.current.name.substring(this.current.name.indexOf("-")+1,this.current.name.length));
    if(this.current.type === 'folder'){
      this.file = null;
      this.dataApi.getFolder(id).subscribe(
        res => {
          this.folders = res;
        }
      );
    }else{
      this.folders = null;
      this.dataApi.getFile(id).subscribe(
        res => {
          this.file = res;
          this.contentFile = this.file.content;
        }
      )
    }
  }
  
  expandParents(node: TreeNode) {
    const parent = this.getParent(node);
    this.treeControl.expand(parent);
    
    if (parent && parent.level > 0) {
      this.expandParents(parent);
    }
  }

  getParent(node: TreeNode) {
    const { treeControl } = this;
    const currentLevel = treeControl.getLevel(node);

    if (currentLevel < 1) {
      return null;
    }

    const startIndex = treeControl.dataNodes.indexOf(node) - 1;

    for (let i = startIndex; i >= 0; i--) {
      const currentNode = treeControl.dataNodes[i];

      if (treeControl.getLevel(currentNode) < currentLevel) {
        return currentNode;
      }
    }
  }

  parseData(data: any){
    const parsedData: any = [];
    for(let i = 0; i < data.length; i++){
      if(data[i].name === "/"){
        let temp: any = {
          name: data[i].name + "-" +data[i].id.toString(),
          type: data[i].type,
        }
        if(this.getChildren2(data[i].id,data,data[i].type).length != 0){
          temp.children = this.getChildren2(data[i].id,data,data[i].type);
        }
        parsedData.push(temp);
      }
      
    }
    return parsedData;
  }

  getChildren2(id: number,data,type: string){
    const children: any = [];
    if(type === 'folder'){
      for(let i = 0; i < data.length; i++){
        if(data[i].father == id ){
          let temp: any = {
            name: data[i].name + "-" +data[i].id.toString(),
            type: data[i].type
          }
          let aux = this.getChildren2(data[i].id,data, data[i].type);
          if(aux.length > 0){
            temp.children = aux;
          }
          children.push(temp);
        }
      }
    }
      return children;
  }

  //Create a new folder
  createFolder(){
    if(this.current != null){
      let id:number = parseInt(this.current.name.substring(this.current.name.indexOf("-")+1,this.current.name.length));
      const dialogRef = this.dialog.open(ModComponent,{ 
        width: '250px',
        data: {message:'Name of the folder:', name:this.name}
      });
      dialogRef.afterClosed().subscribe(result => {
          if(result !== undefined){
            this.name = result;
          const data: any = {
            id: parseInt(this.id),
            name: this.name,
            father: id
          }
          this.dataApi.createFolder(data).subscribe(
            res => {
              this.toastr.Success("Folder created");
              this.ngOnInit();
            },
            err => console.log(err)
          );
          }
        }
      )
    }else{
      this.toastr.Info("Please select a folder");
    }
  }

  //Create a new file
  createFile(){
    if(this.current != null){
      let id:number = parseInt(this.current.name.substring(this.current.name.indexOf("-")+1,this.current.name.length));
      const dialogRef = this.dialog.open(ModComponent,{ 
        width: '250px',
        data: {message:'Name of the file:', name:this.name}
      });
      dialogRef.afterClosed().subscribe(result => {
          if(result !== undefined){
            this.name = result;
            const data: any = {
            name: this.name,
            father: id
          }
          this.dataApi.createFile(data).subscribe(
            res => {
              this.toastr.Success("File created");
              this.ngOnInit();
            },
            err => console.log(err)
          );
          this.name = "";
          }
        }
      )
    }else{
      this.toastr.Info("Please select a folder");
    }
  }

  rename(){
    if(this.current != null){
      let id:number = parseInt(this.current.name.substring(this.current.name.indexOf("-")+1,this.current.name.length));
      let name = this.current.name;
      if(name.substring(0,name.indexOf("-")) === '/'){
        this.toastr.Info("You can't rename the root folder");
      }else{
        const dialogRef = this.dialog.open(ModComponent,{ 
          width: '250px',
          data: {message:'New name', name:this.name}
        });
        dialogRef.afterClosed().subscribe(
          res => {
            if(res !== undefined){
              this.name = res;
              const data = {
                id: id,
                name: this.name
              }
              if(this.current.type === 'folder'){
                this.dataApi.renameFolder(data).subscribe(
                  res => {
                    this.toastr.Success("Folder renamed");
                    this.ngOnInit();
                  }
                )
              }else{
                this.dataApi.renameFile(data).subscribe(
                  res => {
                    this.toastr.Success("File renamed");
                    this.ngOnInit();
                  }
                )
              }
            }
          }
        )
      }
    }else{
      this.toastr.Info("Please select a folder or a file");
    }
  }

  delete(){
    if(this.current != null){
      let name = this.current.name;
      let id:number = parseInt(this.current.name.substring(this.current.name.indexOf("-")+1,this.current.name.length));
      if(name.substring(0,name.indexOf("-")) === '/'){
        this.toastr.Info("You can't delete the root folder");
      }else{
        if(this.current.type === 'folder'){
          this.dataApi.deleteFolder(id).subscribe(
            res => {
              this.toastr.Success("Folder deleted");
              this.ngOnInit();
            }
          )
        }else{
          this.file = null;
          this.dataApi.deleteFile(id).subscribe(
            res => {
              this.toastr.Success("File deleted");
              this.ngOnInit();
            }
          )
        }
      }
    }else
      this.toastr.Info("Please select a folder or a file");
  }

  download(){
    var doc = new jsPDF();
    doc.text(this.file.content,10,10);
    doc.save(this.current.name.substring(0,this.current.name.indexOf("-")));
    this.toastr.Info("Your download will start in a moment");
    this.file = null;
  }

  saveContent(){
    let id:number = parseInt(this.current.name.substring(this.current.name.indexOf("-")+1,this.current.name.length));
    const data = {
      id: id,
      content: this.contentFile
    }
    this.dataApi.updateFile(data).subscribe(
      res => {
        this.toastr.Success("Succesfully saved");
        this.ngOnInit();
        this.file = null;
      }
    );
  }

}

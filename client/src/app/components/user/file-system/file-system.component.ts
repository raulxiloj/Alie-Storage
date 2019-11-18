import { Component, OnInit} from '@angular/core';
import { ActivatedRoute } from '@angular/router'
import { DataApiService } from 'src/app/services/data-api.service';
import { MatTreeFlatDataSource, MatTreeFlattener } from '@angular/material/tree';
import { of as observableOf } from 'rxjs';
import { FlatTreeControl } from '@angular/cdk/tree';
import { ToastrService } from 'src/app/services/toastr.service';
import { MatDialog } from '@angular/material'
import { ModComponent } from 'src/app/components/modal/mod/mod.component'

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

  current: string = "";
  id: string;
  name: string;

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
    this.current = node.name;
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
      let temp: any = {
        name: data[i].name + "-" +data[i].id.toString(),
        type: data[i].type,
      }
      if(this.getChildren2(data[i].id,data).length != 0){
        temp.children = this.getChildren2(data[i].id,data);
      }
      parsedData.push(temp);
    }
    return parsedData;
  }

  getChildren2(id: number,data){
    const children: any = [];
    for(let i = 0; i < data.length; i++){
      if(data[i].father == id){
        children.push({
          name: data[i].name + "-" +data[i].id.toString(),
          type: data[i].type
        });
      }
    }
      return children;
  }

  //Create a new folder
  createFolder(){
    if(this.current.length > 0){
      let id:number = parseInt(this.current.substring(this.current.indexOf("-")+1,this.current.length));
      const dialogRef = this.dialog.open(ModComponent,{ 
        width: '250px',
        data: {message:'Name of the folder:', name:this.name}
      });
      dialogRef.afterClosed().subscribe(result => {
          console.log('The dialog was closed');
          this.name = result;
          console.log(this.name);
        }
      )
      //console.log(id);

    }else{
      this.toastr.Info("Please select a folder");
    }
  }

  createFile(){

  }

}

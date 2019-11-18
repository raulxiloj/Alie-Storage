import { Component, OnInit, Inject } from '@angular/core';
import { MatDialogRef, MAT_DIALOG_DATA } from '@angular/material'

@Component({
  selector: 'app-mod',
  templateUrl: './mod.component.html',
  styleUrls: ['./mod.component.css']
})
export class ModComponent implements OnInit {

  constructor(
    public dialogRef: MatDialogRef<ModComponent>, 
    @Inject(MAT_DIALOG_DATA) public data: string) { }

  ngOnInit() {
  }

  onClick(){
    this.dialogRef.close();
  }

}

import { Component, OnInit } from '@angular/core';
import { DataApiService } from 'src/app/services/data-api.service';

@Component({
  selector: 'app-user-home',
  templateUrl: './user-home.component.html',
  styleUrls: ['./user-home.component.css']
})
export class UserHomeComponent implements OnInit {

  userData: any = { }

  folders: any = {
    type: 'dir',
    name: 'app',
    children: [
      {
        type: 'file',
        name: 'index.html'
      },
      {
        type: 'dir',
        name: 'script.js'
      }
    ]
  }
  constructor(private dataApi: DataApiService) { }

  ngOnInit() {
    this.dataApi.getUserData(this.dataApi.getUser()).subscribe(
      res => {
        this.userData = res;
      },
      err => console.log(err)
    );
    
  }

  displayJsonTree(){
    
  }
}

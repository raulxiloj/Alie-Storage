import { Component, OnInit } from '@angular/core';
import { DataApiService } from 'src/app/services/data-api.service';

@Component({
  selector: 'app-home',
  templateUrl: './home.component.html',
  styleUrls: ['./home.component.css']
})
export class HomeComponent implements OnInit {

  data: any = {};

  constructor(private dataApi: DataApiService) { }

  ngOnInit() {
    this.dataApi.getHomeData().subscribe(
      res => {
        this.data = res;
      },
      err => console.log(err)
    )
  }


}

import { Component, OnInit } from '@angular/core';
import { Router } from '@angular/router';
import { DataApiService } from 'src/app/services/data-api.service';
import { Location } from '@angular/common';

@Component({
  selector: 'app-login',
  templateUrl: './login.component.html',
  styleUrls: ['./login.component.css']
})
export class LoginComponent implements OnInit {

  user:any ={};

  constructor(private dataApi: DataApiService, private router: Router, private location: Location) { }

  ngOnInit() {

  }

  login(){
    this.dataApi.signIn(this.user)
    .subscribe(
      res => {
        this.router.navigate(['/user/Home']);
        this.location.replaceState("/user/Home");
        location.reload();
      }
    )
  }



  

}

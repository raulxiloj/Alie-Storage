import { Component, OnInit } from '@angular/core';
import { Router } from '@angular/router';
import { Location } from '@angular/common';
import { UserService } from 'src/app/services/user.service';
import { DataApiService } from 'src/app/services/data-api.service';

@Component({
  selector: 'app-navbar',
  templateUrl: './navbar.component.html',
  styleUrls: ['./navbar.component.css']
})
export class NavbarComponent implements OnInit {

  public isLogged: boolean = false;
  data: any = [];
  public isUser: boolean= false;
  public isAdmin: boolean = false;

  constructor(private userService: UserService, private router: Router, private location: Location, private dataApi: DataApiService) { }

  ngOnInit() {
    this.onCheckUser();
    this.dataApi.getHomeData().subscribe(
      res => {
        this.data = res;
      }
    )
  }

  logout(){
    this.userService.logout();
    this.router.navigate(['/']);
    this.location.replaceState("/");
    location.reload();
  }

  onCheckUser(): void{
    if(this.userService.getToken() === null){
      this.isLogged = false;
    }else{
      if(this.userService.getUser() !== 'admin')
        this.isUser = true;
      else
        this.isAdmin = true;
      
      this.isLogged = true;
    }
  }

}

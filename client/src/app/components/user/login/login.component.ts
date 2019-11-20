import { Component, OnInit } from '@angular/core';
import { Router } from '@angular/router';
import { Location } from '@angular/common';
import { ToastrService } from 'src/app/services/toastr.service';
import { UserService } from 'src/app/services/user.service';

@Component({
  selector: 'app-login',
  templateUrl: './login.component.html',
  styleUrls: ['./login.component.css']
})
export class LoginComponent implements OnInit {

  user:any ={};
  response: any = {};

  constructor(private userService: UserService, private router: Router, private location: Location, private toastr: ToastrService) { }

  ngOnInit() {

  }

  login(){
    this.userService.signIn(this.user)
    .subscribe(
      res => {
        this.response = res;
        console.log(this.response);
        if(this.response.tipo == 1){
          this.router.navigate(['/user/Home']);
          this.location.replaceState("/user/Home");
          location.reload();
        }else{
          this.router.navigate(['/admin/editHome']);
          this.location.replaceState("/admin/editHome");
          location.reload();
        }
      },
      err => {
        if(err.status == 500){
          this.toastr.Error("Inactive user","Please check your email");
        }else if(err.status == 501){
          this.toastr.Error("Incorrect password","Try again");
        }else if(err.status == 404){
          this.toastr.Error("Unexisting user");
        }
      }
    )
  }

}

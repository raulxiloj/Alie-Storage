import { Component, OnInit } from '@angular/core';
import { DataApiService } from 'src/app/services/data-api.service';
import { Router } from '@angular/router'
import { ToastrService } from 'src/app/services/toastr.service';
import { UserService } from 'src/app/services/user.service';


@Component({
  selector: 'app-confirmation',
  templateUrl: './confirmation.component.html',
  styleUrls: ['./confirmation.component.css']
})
export class ConfirmationComponent implements OnInit {

  username: string;
  password: string;
  user: any = {};

  constructor(private userService: UserService, private router:Router, private toastr:ToastrService) { }

  ngOnInit() {

  }

  activateUser(){
    this.userService.activateUser(this.user)
    .subscribe(
      res => {
        console.log(res);
        this.toastr.Success("Succesfully activated");
        this.router.navigate(['/']);
      },
      err => {
        this.toastr.Error("Wrong temporal password, please check your email");
      }
    )
  }


}

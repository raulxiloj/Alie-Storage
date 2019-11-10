import { Component, OnInit } from '@angular/core';
import { DataApiService } from 'src/app/services/data-api.service';
import { Router } from '@angular/router'
import { ToastrService } from 'src/app/services/toastr.service';


@Component({
  selector: 'app-confirmation',
  templateUrl: './confirmation.component.html',
  styleUrls: ['./confirmation.component.css']
})
export class ConfirmationComponent implements OnInit {

  username: string;
  password: string;
  user: any = {};

  constructor(private dataApiService: DataApiService, private router:Router, private toastr:ToastrService) { }

  ngOnInit() {

  }

  activateUser(){
    this.dataApiService.signIn(this.username)
    .subscribe(
      res =>{
        this.user = res;
        if(this.user.CLAVE == this.password){
          this.dataApiService.activateUser(this.username)
          .subscribe(
             res =>  {
              this.toastr.Success("Succesfully activated");
              this.router.navigate(['/']);
            },
            err => {
              console.log(err.message);
            }
          );
        }else{
          console.log("incorrect password");
        }
        
      }
    )
  }


}

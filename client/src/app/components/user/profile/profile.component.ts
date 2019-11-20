import { Component, OnInit, ViewChild, ElementRef } from '@angular/core';
import { UserService } from 'src/app/services/user.service';
import { ToastrService } from 'src/app/services/toastr.service';

@Component({
  selector: 'app-profile',
  templateUrl: './profile.component.html',
  styleUrls: ['./profile.component.css']
})
export class ProfileComponent implements OnInit {

  userData: any = {}
  newData: any = {}

  constructor(private userService: UserService, private toastr: ToastrService) { }

  ngOnInit() {
    this.userService.getUserData(this.userService.getUser()).subscribe(
      res => {
        this.userData = res;
      },
      err => console.log(err)
    )
  }

  saveChanges(){
    if(Object.entries(this.newData).length > 0){
      this.newData.hasOwnProperty("firstname") ? console.log("new firstname") : this.newData.firstname = this.userData.firstname;
      this.newData.hasOwnProperty("lastname") ? console.log("new lastname") : this.newData.lastname = this.userData.lastname;
      this.newData.hasOwnProperty("email") ? console.log("new address") : this.newData.email = this.userData.email;
      this.newData.hasOwnProperty("phone") ? console.log("new phone number") : this.newData.phone = this.userData.phone;
      this.newData.hasOwnProperty("address") ? console.log("new address") : this.newData.address = this.userData.address;
      this.newData.hasOwnProperty("password") ? console.log("new pass"): this.newData.password = this.userData.password;
      this.newData.username = this.userData.username;
      this.userService.updateUser(this.newData).subscribe(
        res => {
          this.toastr.Success("Data updated succesfully");
        }
      );
    }else{
      this.newData.firstname = this.userData.firstname;
      this.newData.lastname = this.userData.lastname;
      this.newData.email = this.userData.email;
      this.newData.phone = this.userData.phone;
      this.newData.address = this.userData.address;
      this.newData.password = this.userData.password;
      this.newData.username = this.userData.username;
      this.userService.updateUser(this.newData).subscribe(
        res => {
          this.toastr.Success("Data updated succesfully");
        }
      );
    }
  }

  showPassword(){
    var x = <HTMLInputElement>document.getElementById("myPassword");
    if(x.type === 'password')
      x.type = 'text';
    else
      x.type = 'password';
  }

}

import { Component, OnInit } from '@angular/core';
import { UserService } from 'src/app/services/user.service';

@Component({
  selector: 'app-user-home',
  templateUrl: './user-home.component.html',
  styleUrls: ['./user-home.component.css']
})
export class UserHomeComponent implements OnInit {

  userData: any = { }

  constructor(private userService: UserService) { }

  ngOnInit() {
    this.userService.getUserData(this.userService.getUser()).subscribe(
      res => {
        this.userData = res;
      },
      err => console.log(err)
    );
    
  }

}

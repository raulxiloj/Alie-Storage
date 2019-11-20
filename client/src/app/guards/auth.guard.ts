import { Injectable } from '@angular/core';
import { CanActivate, Router } from '@angular/router';
import { UserService } from '../services/user.service';

@Injectable({
  providedIn: 'root'
})
export class AuthGuard implements CanActivate {

  temp: boolean = false;

  constructor(private userService: UserService, private router: Router){ }

  canActivate(){
    if(this.userService.getToken() != null){
      return true;
    }else{
      this.router.navigate(['user/login']);
      return false;
    }
  }
  
}

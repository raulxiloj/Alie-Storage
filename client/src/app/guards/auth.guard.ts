import { Injectable } from '@angular/core';
import { CanActivate, Router } from '@angular/router';
import { Observable } from 'rxjs';

import { DataApiService } from '../services/data-api.service'

@Injectable({
  providedIn: 'root'
})
export class AuthGuard implements CanActivate {

  temp: boolean = false;

  constructor(private dataService: DataApiService, private router: Router){ }

  canActivate(){
    if(this.dataService.getToken()){
      return true;
    }else{
      this.router.navigate(['user/login']);
      return false;
    }
  }
  
}

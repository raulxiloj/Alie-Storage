import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http'
import { User } from '../models/user';
import { JWT } from '../models/jwtResponse'
import { tap } from 'rxjs/operators'
import { RouterLink } from '@angular/router';
//import { Observable } from 'rxjs/internal/Observable'

@Injectable({
  providedIn: 'root'
})
export class DataApiService {

  API_URL: string = 'http://localhost:3000';
  private token: string = null;
  private user: string = null;

  constructor(private http: HttpClient) { }

  registerUser(user: User){
    return this.http.post(`${this.API_URL}/user/register`,user);
  }

  activateUser(user: Object){
    return this.http.put(`${this.API_URL}/user/activate`,user);
  }

  signIn(user: Object){
    return this.http.post(`${this.API_URL}/user/signIn`,user)
    .pipe(tap(
      (res: JWT) => {
        if(res){
          this.saveToken(res.accessToken);
          this.saveUser(res.user);
        }
      }
    ));;
  }

  public getHomeData(){
    return this.http.get(`${this.API_URL}/admin/getHomeData`);
  }

  public updateHomeData(data: Object){
    return this.http.put(`${this.API_URL}/admin/updateHomeData`,data);
  }

  public getUserData(username:string){
    return this.http.get(`${this.API_URL}/user/getUser/${username}`);
  }

  logout(){
    this.token = null;
    this.user = null;
    localStorage.removeItem('ACCESS_TOKEN');
    localStorage.removeItem('CURRENT_USER');
  }

  private saveUser(user: string){
    localStorage.setItem("CURRENT_USER",user);
    this.user = user;
  }

  public getUser():string{
    if(!this.user){
      this.user = localStorage.getItem("CURRENT_USER");
    }
    return this.user;
  }

  private saveToken(token: string){
    localStorage.setItem('ACCESS_TOKEN',token);
    this.token = token;
  }

  public getToken():string{
    if(!this.token){
      this.token = localStorage.getItem("ACCESS_TOKEN");
    }
    return this.token;
  }

}
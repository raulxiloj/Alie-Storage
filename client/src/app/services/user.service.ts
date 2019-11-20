import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http'
import { tap } from 'rxjs/operators'
import { User } from '../models/user';
import { JWT } from '../models/jwtResponse'

@Injectable({
  providedIn: 'root'
})
export class UserService {

  URL: string = "http://localhost:3000/user";
  private token: string = null;
  private user: string = null;

  constructor(private http: HttpClient) { }
  
  createUser(user: User, photo: File){
    const fd = new FormData();
    fd.append('username',user.username);
    fd.append('clave',user.clave);
    fd.append('nombre',user.nombre);
    fd.append('apellido',user.apellido);
    fd.append('correo',user.correo);
    fd.append('telefono',user.telefono.toString());
    fd.append('genero',user.genero);
    fd.append('fecha_nacimiento',user.fecha_nacimiento);
    fd.append('direccion',user.direccion);
    fd.append('estado',user.estado.toString());
    fd.append('image',photo);
    return this.http.post(`${this.URL}/register`,fd);
  }

  public getUserData(username:string){
    return this.http.get(`${this.URL}/getUser/${username}`);
  }

  public updateUser(user: any){
    return this.http.put(`${this.URL}/update`,user);
  }

  activateUser(user: Object){
    return this.http.put(`${this.URL}/activate`,user);
  }

  signIn(user: Object){
    return this.http.post(`${this.URL}/signIn`,user)
    .pipe(tap(
      (res: JWT) => {
          this.saveToken(res.accessToken);
          this.saveUser(res.user);
      },
      err => {
        console.log(err);
      }
    ));;
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
      this.token = localStorage.getItem("ACCESS_TOKEN")
    }
    return this.token;
  }

}

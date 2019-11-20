import { Component, OnInit } from '@angular/core';
import { User } from 'src/app/models/user';
import { DataApiService } from 'src/app/services/data-api.service';
import { Router } from '@angular/router'
import { UserService } from 'src/app/services/user.service';

interface HtmlInputEvent extends Event{
  target: HTMLInputElement & EventTarget;
}

@Component({
  selector: 'app-register',
  templateUrl: './register.component.html',
  styleUrls: ['./register.component.css']
})
export class RegisterComponent implements OnInit {

  user: User = {
    username: '',
    nombre: '',
    apellido: '',
    clave: '',
    correo: '',
    genero: '',
    fecha_nacimiento: '',
    direccion : '',
    estado: 0
  }

  file: File;
  photoSelected: string | ArrayBuffer;

  constructor(private userService: UserService, private router:Router) { }

  ngOnInit() {

  }

  registerUser(){
    console.log(this.user);
    this.user.clave = this.genericPassword();
    this.user.username = this.user.username.toLowerCase();
    this.userService.createUser(this.user,this.file)
    .subscribe(
      res => {
        this.router.navigate(['/user/confirmation']);
      },
      err => console.error(err)
    )
  }

  genericPassword(): string{
    return Math.random().toString(36).slice(-8);
  }

  onPhotoSelected(event:HtmlInputEvent):void{
    if(event.target.files && event.target.files[0]){
      this.file = event.target.files[0];
      //image preview
      const reader = new FileReader();
      reader.onload = e => this.photoSelected = reader.result;
      reader.readAsDataURL(this.file);
    }
  }

}

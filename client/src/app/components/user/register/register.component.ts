import { Component, OnInit } from '@angular/core';
import { User } from 'src/app/models/user';
import { DataApiService } from 'src/app/services/data-api.service';
import { Router } from '@angular/router'

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
    telefono: 0,
    fotografia: '',
    genero: '',
    fecha_nacimiento: '',
    direccion : '',
    estado: 0
  }

  constructor(private dataApiService: DataApiService, private router:Router) { }

  ngOnInit() {

  }

  registerUser(){
    this.user.clave = this.genericPassword();
    this.dataApiService.registerUser(this.user)
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

}

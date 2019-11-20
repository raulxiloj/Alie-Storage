import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import { FormsModule } from '@angular/forms'
import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { NavbarComponent } from './components/navbar/navbar.component';
import { HomeComponent } from './components/home/home.component';
import { LoginComponent } from './components/user/login/login.component';
import { RegisterComponent } from './components/user/register/register.component';
import { ProfileComponent } from './components/user/profile/profile.component';       
import { Page404Component } from './components/page404/page404.component';
import { DataApiService } from './services/data-api.service';
import { HttpClientModule } from '@angular/common/http';
import { ConfirmationComponent } from './components/confirmation/confirmation.component';
import { ToastrService } from './services/toastr.service';
import { UserHomeComponent } from './components/user/user-home/user-home.component';
import { EditHomeComponent } from './components/admin/edit-home/edit-home.component';
import { FileSystemComponent } from './components/user/file-system/file-system.component';
import { BrowserAnimationsModule } from '@angular/platform-browser/animations';
import { MatTreeModule, MatIconModule, MatButtonModule, MatDialogModule, MatFormFieldModule,MatInputModule } from '@angular/material'
import { UserService } from './services/user.service';
import { ModComponent } from './components/modal/mod/mod.component';

@NgModule({
  declarations: [
    AppComponent,
    NavbarComponent,
    HomeComponent,
    LoginComponent,
    RegisterComponent,
    ProfileComponent,
    Page404Component,
    ConfirmationComponent,
    UserHomeComponent,
    EditHomeComponent,
    FileSystemComponent,
    ModComponent,
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    HttpClientModule,
    FormsModule,
    BrowserAnimationsModule,
    MatTreeModule,
    MatIconModule,
    MatButtonModule,
    MatDialogModule,
    MatFormFieldModule,
    MatInputModule
  ],
  providers: [
    DataApiService,
    UserService,
    ToastrService
  ],
  bootstrap: [AppComponent],
  entryComponents: [ModComponent]
})
export class AppModule { }

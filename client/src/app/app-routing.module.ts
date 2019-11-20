import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';
import { HomeComponent } from './components/home/home.component';
import { LoginComponent } from './components/user/login/login.component';
import { RegisterComponent } from './components/user/register/register.component';
import { ProfileComponent } from './components/user/profile/profile.component';
import { Page404Component } from './components/page404/page404.component';
import { ConfirmationComponent } from './components/confirmation/confirmation.component';
import { UserHomeComponent } from './components/user/user-home/user-home.component';
import { AuthGuard } from './guards/auth.guard';
import { EditHomeComponent } from './components/admin/edit-home/edit-home.component';
import { FileSystemComponent } from './components/user/file-system/file-system.component';

const routes: Routes = [
  {
    path: '',
    component: HomeComponent
  },
  {
    path: 'user/login',
    component: LoginComponent
  },
  {
    path: 'user/register',
    component: RegisterComponent
  },
  {
    path: 'user/profile',
    component: ProfileComponent,
    canActivate: [AuthGuard]
  },
  {
    path: 'user/confirmation',
    component: ConfirmationComponent
  },
  {
    path: 'user/Home',
    component: UserHomeComponent,
    canActivate: [AuthGuard]
  },
  {
    path: 'user/fileSystem/:id',
    component: FileSystemComponent
  },
  {
    path: 'admin/editHome',
    component: EditHomeComponent
  },
  {
    path: '**',
    component: Page404Component
  }
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }

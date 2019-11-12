import { Component, OnInit } from '@angular/core';
import { DataApiService } from 'src/app/services/data-api.service';
import { ToastrService } from 'src/app/services/toastr.service';
import { Router } from '@angular/router';

@Component({
  selector: 'app-edit-home',
  templateUrl: './edit-home.component.html',
  styleUrls: ['./edit-home.component.css']
})
export class EditHomeComponent implements OnInit {

  data: any = {};

  constructor(private dataApi: DataApiService,private router: Router ,private toastr: ToastrService) { }

  ngOnInit() {
    this.dataApi.getHomeData().subscribe(
      res => {
        this.data = res;
      },
      err => console.log(err)
    )
  }

  saveChanges(){
    this.dataApi.updateHomeData(this.data).subscribe(
      res => {
        this.toastr.Success("Succesfully changed");
        this.router.navigate(['/']);
      },
      err => console.log(err)
    );
  }

}

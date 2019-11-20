import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http'

@Injectable({
  providedIn: 'root'
})
export class DataApiService  {

  private API_URL: string = 'http://localhost:3000';

  constructor(private http: HttpClient) { }

  public getHomeData(){
    return this.http.get(`${this.API_URL}/admin/getHomeData`);
  }

  public updateHomeData(data: Object){
    return this.http.put(`${this.API_URL}/admin/updateHomeData`,data);
  }

  public getFileSystem(id: string){
    return this.http.get(`${this.API_URL}/fs/${id}`);
  }

  public createFolder(data: Object){
    return this.http.post(`${this.API_URL}/fs/createFolder`,data);
  }

  public createFile(data: Object){
    return this.http.post(`${this.API_URL}/fs/createFile`,data)
  }

  public getFolder(id: number){
    return this.http.get(`${this.API_URL}/fs/getFolder/${id}`);
  }

  public getFile(id: number){
    return this.http.get(`${this.API_URL}/fs/getFile/${id}`);
  }

  public updateFile(data){
    return this.http.put(`${this.API_URL}/fs/updateFile`,data);
  }

  public renameFolder(data){
    return this.http.put(`${this.API_URL}/fs/renameFolder`,data);
  }

  public renameFile(data){
    return this.http.put(`${this.API_URL}/fs/renameFile`,data)
  }

  public deleteFolder(id: number){
    return this.http.delete(`${this.API_URL}/fs/deleteFolder/${id}`);
  }

  public deleteFile(id: number){
    return this.http.delete(`${this.API_URL}/fs/deleteFile/${id}`);
  }

}
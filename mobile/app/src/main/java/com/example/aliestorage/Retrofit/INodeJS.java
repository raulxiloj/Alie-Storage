package com.example.aliestorage.Retrofit;

import io.reactivex.Observable;
import retrofit2.http.Field;
import retrofit2.http.FormUrlEncoded;
import retrofit2.http.GET;
import retrofit2.http.POST;

public interface INodeJS {
    @POST("/user/signIn")
    @FormUrlEncoded
    Observable<String> loginUser(@Field("username") String email,
                                 @Field("clave") String password);

    @GET("/admin/Home")
    @FormUrlEncoded
    Observable<Object> getHome();


}

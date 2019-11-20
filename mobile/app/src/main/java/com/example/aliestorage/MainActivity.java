package com.example.aliestorage;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import com.example.aliestorage.Retrofit.INodeJS;
import com.example.aliestorage.Retrofit.RetrofietClient;

import io.reactivex.android.schedulers.AndroidSchedulers;
import io.reactivex.disposables.CompositeDisposable;
import io.reactivex.functions.Consumer;
import io.reactivex.schedulers.Schedulers;
import retrofit2.Retrofit;

public class MainActivity extends AppCompatActivity {

    INodeJS myAPI;
    CompositeDisposable compositeDisposable = new CompositeDisposable();

    EditText edt_user, edt_pass;
    Button btn_ok;


    @Override
    protected void onStop(){
        compositeDisposable.clear();
        super.onStop();
    }

    @Override
    protected void onDestroy(){
        compositeDisposable.clear();
        super.onDestroy();
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        //Init API
        Retrofit retrofit = RetrofietClient.getInstance();
        myAPI = retrofit.create(INodeJS.class);

        //View
        edt_user = findViewById(R.id.edt_user);
        edt_pass = findViewById(R.id.edt_pass);
        btn_ok = findViewById(R.id.button);

        //Event
        btn_ok.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){
                loginUser(edt_user.getText().toString(),edt_pass.getText().toString());
            }
        });
    }

    private void loginUser(String user, String pass) {
        compositeDisposable.add(myAPI.loginUser(user,pass).
                subscribeOn(Schedulers.io())
                .observeOn(AndroidSchedulers.mainThread())
                .subscribe(new Consumer<String>() {
                    @Override
                    public void accept(String s) throws Exception {
                        if(s.contains("user")){
                            Toast.makeText(MainActivity.this,"Login Succes",Toast.LENGTH_LONG).show();
                            Intent i = new Intent(MainActivity.this,Home.class);
                            startActivity(i);
                        }else{
                            Toast.makeText(MainActivity.this,s,Toast.LENGTH_LONG).show();
                        }
                    }
                })
        );
    }
}

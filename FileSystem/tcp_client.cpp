#include "tcp_client.h"

tcp_client::tcp_client(){
    sock = -1;
    port = 0;
    address = "";
}

/*
 * Funcion para conectarse a un host
 * @param direccion: direccion del host
 * @param puerto: Numero de puerto a conectarse
*/
bool tcp_client::conn(string direccion , int puerto){

    //create socket if it is not already created
    if(sock == -1){
        //Create socket
        sock = socket(AF_INET , SOCK_STREAM , 0);
        if (sock == -1)
            perror("Could not create socket");
        cout<<"Socket created\n";
    }

    //setup address structure
    if(inet_addr(direccion.c_str()) == -1){
        struct hostent *he;
        struct in_addr **addr_list;

        //resolve the hostname, its not an ip address
        if ( (he = gethostbyname( direccion.c_str() ) ) == NULL){
            //gethostbyname failed
            herror("gethostbyname");
            cout<<"Failed to resolve hostname\n";
            return false;
        }

        //Cast the h_addr_list to in_addr , since h_addr_list also has the ip address in long format only
        addr_list = (struct in_addr **) he->h_addr_list;

        for(int i = 0; addr_list[i] != NULL; i++){
            server.sin_addr = *addr_list[i];
            cout<<direccion<<" resolved to "<<inet_ntoa(*addr_list[i])<<endl;
            break;
        }
    }else//plain ip address
        server.sin_addr.s_addr = inet_addr( direccion.c_str() );

    server.sin_family = AF_INET;
    server.sin_port = htons( puerto );

    //Connect to remote server
    if (connect(sock , (struct sockaddr *)&server , sizeof(server)) < 0){
        perror("connect failed. Error");
        return 1;
    }

    cout<<"Connected\n";
    return true;
}

/*
 * Funcion para enviar informacion al host
*/
bool tcp_client::send_data(string data){
    //Send some data
    if( send(sock , data.c_str() , strlen( data.c_str() ) , 0) < 0){
        perror("Send failed : ");
        return false;
    }
    cout<<"Data send\n";

    return true;
}


/*
 * Funcion para recibir informacion del host
*/
string tcp_client::receive(int size=512){
    char buffer[size];
    string reply;

    //Receive a reply from the server
    if( recv(sock , buffer , sizeof(buffer) , 0) < 0)
        puts("recv failed");

    reply = buffer;
    return reply;
}

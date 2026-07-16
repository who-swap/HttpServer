#include "stdio.h"
#include "string.h"
#include "iostream"
#include "fstream"

#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
using namespace std; 

//Get data in 8 bytes chunk and merge them;
string getLinesChannel(int *clientSocket){
  char buffer[8];
  string str;
  while(recv(*clientSocket,buffer,8,0)){
    str.append(buffer,sizeof(buffer));
  }
  int byteCount =  recv(*clientSocket,buffer,8,0); // Check if there are any leftover packets;
  if(byteCount>0){
    str.append(buffer,byteCount); //append the leftover all for once;
  }
  return str;

}



int main(){
  //creating a socket with IPv4(AF_INET) & TCP(SOCK_STREAM);
  int server_socket = socket(AF_INET,SOCK_STREAM,0);

  //Setting up address of the socket to accept requests;
  sockaddr_in serverAdress;
  serverAdress.sin_family = AF_INET; //IPv4 family  
  serverAdress.sin_port = htons(8080); // htons:  converts port into network byte order
  serverAdress.sin_addr.s_addr = INADDR_ANY; //sin_addr.s_addr: tells the socket to receive the request on specific ip;
                                             //INADDR_ANY : on any Ip we are receiving 

  bind(server_socket,(struct sockaddr*)&serverAdress, sizeof(serverAdress)); //binds the socket to the address;
                                                                             
  listen(server_socket,5);
  int clientSocket = accept(server_socket, nullptr, nullptr); //Accepting clients; 
                                                              //
  string str = getLinesChannel(&clientSocket);

  cout<<str;

  return 0;


}

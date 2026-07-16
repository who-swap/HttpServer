#include "stdio.h"
#include "arpa/inet.h"
#include "sys/socket.h"
#include "netinet/in.h"
#include "iostream"
#include "cstring"
using namespace std;

#define PORT 8080

int main(){
  char buffer[1024];
  cout<<">";
  cin>>buffer;
  cout<<endl;
  int sockfd = socket(AF_INET,SOCK_DGRAM,0);

  sockaddr_in socketAddr;
  socketAddr.sin_family = AF_INET;
  socketAddr.sin_port = htons(PORT);
  socketAddr.sin_addr.s_addr = INADDR_ANY;


  sendto(sockfd,buffer,strlen(buffer),MSG_CONFIRM,(const struct sockaddr *)&socketAddr,(sizeof(socketAddr)));
  int n= recvfrom(sockfd,buffer,1024,MSG_WAITALL,(struct sockaddr *)&socketAddr,(socklen_t*)sizeof(socketAddr));
  buffer[n] = '\0';
  cout<<buffer<<endl;
  return 0;
  

}

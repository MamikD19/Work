#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main()
{
	int sockfd,len,i,a,d;
	char q[200];
	struct sockaddr_in sa,ca;
	
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	sa.sin_family=AF_INET;
	sa.sin_addr.s_addr=inet_addr("127.0.0.1");
	sa.sin_port=6002;

	len=sizeof(sa);
	i= connect (sockfd,(struct sockaddr *) &sa,len);
	printf("(%d %d)\n",sockfd,i);
	printf("Give a number to the server");
	scanf("%d",&a);
	send(sockfd,&a,4,0);
	recv(sockfd,&d,50,0);
	printf("Server sent %d\n",d);
}

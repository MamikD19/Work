#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main()
{
	int sockfd,len,i,a,d,b,sum=0,s1=0,d1=0;
	char q[200];
	struct sockaddr_in sa,ca;
	
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	sa.sin_family=AF_INET;
	sa.sin_addr.s_addr=inet_addr("127.0.0.1");
	sa.sin_port=6002;

	len=sizeof(sa);
	i= connect (sockfd,(struct sockaddr *) &sa,len);
	printf("(%d %d)\n",sockfd,i);
	printf("Give first number to the client");
	scanf("%d",&a);
	printf("Give second number to the client");
	scanf("%d",&b);
	send(sockfd,&a,4,0);
	send(sockfd,&b,4,0);
	recv(sockfd,&sum,4,0);
	printf("client sent sum %d\n",sum);
	d=2*sum;
	send(sockfd,&d,4,0);
	recv(sockfd,&s1,4,0);
	recv(sockfd,&d1,4,0);
	printf("Server sent sum2 %d\n",s1);
	printf("Server sent diff1 %d\n",d1);
}

#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main()
{
	int sockfd,fb,len,i,p,dou,q,sum=0,x,sum1=0,diff=0;
	struct sockaddr_in sa,ca;
	
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	sa.sin_family=AF_INET;
	sa.sin_addr.s_addr=INADDR_ANY;
	sa.sin_port=6002;

	len=sizeof(sa);
	i= bind (sockfd,(struct sockaddr *) &sa,len);
	printf("(%d %d)\n",sockfd,i);
	listen(sockfd,5);
	fb= accept (sockfd, (struct sockaddr *) &ca,&len);
	printf("[%d]\n",fb);
	recv(fb,&p,4,0);
	recv(fb,&q,4,0);
	printf("server sent %d\n ",p);
	printf("server sent %d\n ",q);
	sum=p+q;
	send(sockfd,&sum,4,0);
	recv(fb,&dou,4,0);
	printf("server sent double %d ",dou);	
	printf("Enter a number to sent to server");
	scanf("%d",&x);
	sum1=x+dou;
	diff=x-dou;
	send(sockfd,&sum1,4,0);
	send(sockfd,&diff,4,0);
}

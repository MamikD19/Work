#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main()
{
	int sockfd,len,i,num,j,sn,tt,dnum;
	struct sockaddr_in sa;

	sockfd=socket(AF_INET,SOCK_STREAM,0);
	sa.sin_family=AF_INET;
	sa.sin_addr.s_addr=inet_addr("127.0.0.1");
	sa.sin_port=6004;
	
	len=sizeof(sa);
	i=connect(sockfd,(struct sockaddr *)&sa,len);
	printf("(%d %d)\n",sockfd,i);
	
	recv(sockfd,&sn,4,0);
	printf("Server sent a signal %d",sn);
	if(sn)
	{
		printf("Enter the thinlking time of the philosopher wearther to eat or pass");
		scanf("%d",&tt);
		sleep(tt);
		printf("Enter 1 to eat or anyother to pass");
		scanf("%d",&dnum);
		if(dnum==1)
		{
			printf("Ente a number to give to the server");
			scanf("%d",&num);
			send(sockfd,&num,4,0);
		}
		else
		{
			send(sockfd,&dnum,4,0);
		}
	}
}

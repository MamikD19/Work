#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main()
{
	int sockfd,fd,sockfd1,fd1,len,len1,i,p,num,num1,j,k,l,m;
	int arr[100],brr[100];

	struct sockaddr_in sa,ca,sa1,ca1,sa2,ca2,sa3,ca3;
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	sockfd1=socket(AF_INET,SOCK_STREAM,0);
	
	sa.sin_family=AF_INET;
	sa.sin_addr.s_addr=INADDR_ANY;
	sa.sin_port=6001;

	sa1.sin_family=AF_INET;
	sa1.sin_addr.s_addr=INADDR_ANY;
	sa1.sin_port=6002;

	
	
	len=sizeof(sa);
	len1=sizeof(sa1);
	
	i=bind(sockfd,(struct sockaddr *)&sa,len);
	p=bind(sockfd1,(struct sockaddr *)&sa1,len1);
	
	printf("(%d %d)\n",sockfd,i);
	printf("(%d %d)\n",sockfd1,p);
	
	listen(sockfd,5);
	listen(sockfd1,5);
	
	fd=accept(sockfd,(struct sockaddr *)&ca,&len);
	fd1=accept(sockfd1,(struct sockaddr *)&ca1,&len1);
	printf("[%d]\n",fd);
	printf("[%d]\n",fd1);
	
	for(j=1;j<=10;j++)
	{
		recv(fd,&num,4,0);
		arr[j]=num;
		
	}
	for(k=1;k<=10;k++)
	{
		recv(fd1,&num1,4,0);
		brr[j]=num1;
	}
	for(l=1;l<=10;l++)
	{
		send(fd1,&arr,4,0);
	}

	
	for(m=1;m<=10;m++)
	{
		send(fd,&brr,4,0);
	}
	

	
}

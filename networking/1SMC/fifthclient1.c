#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main()
{
	int sockfd,len,i,num[100],j,k,num1,arr[100];
	struct sockaddr_in sa;

	sockfd=socket(AF_INET,SOCK_STREAM,0);
	sa.sin_family=AF_INET;
	sa.sin_addr.s_addr=inet_addr("127.0.0.1");
	sa.sin_port=6001;
	
	len=sizeof(sa);
	i=connect(sockfd,(struct sockaddr *)&sa,len);
	printf("(%d %d)\n",sockfd,i);
	printf("Enter 10  numbers for the server");
	for(j=1;j<=10;j++)
	{
		scanf("%d",&num[i]);
		send(sockfd,&num,4,0);
	}
	for(k=1;k<=10;k++)
	{
		recv(sockfd,&num1,4,0);
		arr[k]=num1;
		printf("%d\n",arr[k]);
	}

}

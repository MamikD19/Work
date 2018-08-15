#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main()
{
	int sockfd,fd,sockfd1,fd1,sockfd2,fd2,sockfd3,fd3,sockfd4,fd4,len,len1,len2,len3,len4,i,p,k,l,m,j; //socket description
	int numphi;//chossing which philosopher to eat
	int num,num1,num2,num3,num4;//chopstick
	int dnum1,dnum2,dnum3,dnum4,dnum5;//dessision making
	int t1,t2,t3,t4,t5;//eating time
	

	struct sockaddr_in sa,ca,sa1,ca1,sa2,ca2,sa3,ca3,sa4,ca4;/*socket connection start*/
	sockfd=socket(AF_INET,SOCK_STREAM,0);/*socket connection*/
	sockfd1=socket(AF_INET,SOCK_STREAM,0);/*socket connection*/
	sockfd2=socket(AF_INET,SOCK_STREAM,0);/*socket connection*/
	sockfd3=socket(AF_INET,SOCK_STREAM,0);/*socket connection*/
	sockfd4=socket(AF_INET,SOCK_STREAM,0);/*socket connection*/
	
	sa.sin_family=AF_INET;/*socket connection*/
	sa.sin_addr.s_addr=INADDR_ANY;/*socket connection*/
	sa.sin_port=6001;/*socket connection and port number */
	sa1.sin_family=AF_INET;/*socket connection*/
	sa1.sin_addr.s_addr=INADDR_ANY;/*socket connection*/
	sa1.sin_port=6002;/*socket connection and port number*/
	sa2.sin_family=AF_INET;/*socket connection*/
	sa2.sin_addr.s_addr=INADDR_ANY;/*socket connection*/
	sa2.sin_port=6003;/*socket connection and port number*/
	sa3.sin_family=AF_INET;/*socket connection*/
	sa3.sin_addr.s_addr=INADDR_ANY;/*socket connection*/
	sa3.sin_port=6004;/*socket connection and port number*/
	sa4.sin_family=AF_INET;/*socket connection*/
	sa4.sin_addr.s_addr=INADDR_ANY;/*socket connection*/
	sa4.sin_port=6005;/*socket connection and port number*/

	

	len=sizeof(sa);/*socket connection*/
	len1=sizeof(sa1);/*socket connection*/
	len2=sizeof(sa2);/*socket connection*/
	len3=sizeof(sa3);/*socket connection*/
	len3=sizeof(sa4);/*socket connection*/
	i=bind(sockfd,(struct sockaddr *)&sa,len);/*socket connection*/
	p=bind(sockfd1,(struct sockaddr *)&sa1,len1);/*socket connection*/
	k=bind(sockfd2,(struct sockaddr *)&sa2,len2);/*socket connection*/
	l=bind(sockfd3,(struct sockaddr *)&sa3,len3);/*socket connection*/
	m=bind(sockfd4,(struct sockaddr *)&sa4,len4);/*socket connection*/
	printf("(%d %d)\n",sockfd,i);/*socket connection*/
	printf("(%d %d)\n",sockfd1,p);/*socket connection*/
	printf("(%d %d)\n",sockfd2,k);/*socket connection*/
	printf("(%d %d)\n",sockfd3,l);/*socket connection*/
	printf("(%d %d)\n",sockfd4,l);/*socket connection*/
	listen(sockfd,5);/*client running report*/
	listen(sockfd1,5);/*client running report*/
	listen(sockfd2,5);/*client running report*/
	listen(sockfd3,5);/*client running report*/
	listen(sockfd4,5);/*client running report*/
	fd=accept(sockfd,(struct sockaddr *)&ca,&len);/*socket connection*/
	fd1=accept(sockfd1,(struct sockaddr *)&ca1,&len1);/*socket connection*/
	fd2=accept(sockfd2,(struct sockaddr *)&ca2,&len2);/*socket connection*/
	fd3=accept(sockfd3,(struct sockaddr *)&ca3,&len3);/*socket connection*/
	fd4=accept(sockfd4,(struct sockaddr *)&ca4,&len4);/*socket connection*/
	printf("[%d]\n",fd);/*server running*/
	printf("[%d]\n",fd1);/*server running*/
	printf("[%d]\n",fd2);/*server running*/
	printf("[%d]\n",fd3);/*server running*/
	printf("[%d]\n",fd4);/*server running*/

	while(1)/*infinite loop*/
	{
		printf("Enter 1 if you want first philosopher to eat");
		printf("Enter 2 if you want second philosopher to eat");
		printf("Enter 3 if you want third philosopher to eat");
		printf("Enter 4 if you want fourth philosopher to eat");
		printf("Enter 5 if you want fifth philosopher to eat");
		scanf("%d",&numphi);
		switch(numphi)/*choice start*/
		{
			case 1:
			send(fd,&numphi,4,0);/*chop stick one signal sent*/
			send(fd4,&numphi,4,0);/*chop stick five signal sent*/
			printf("Server sent a signal");
			if(dnum1==1)
			{
				recv(fd,&num,4,0);/*chop stick one signal recived*/
				recv(fd4,&num4,4,0);/*chop stick five signal recived*/
				if(num)
				{
					if(num4)
					{
						printf("First philoser is eating");
						printf("Enter the eating time");
						scanf("%d",&t1);/*Eating time*/
						sleep(t1);
					}
				}
			}
			else
			{
				break;
			}
			break;
			case 2:
			send(fd,&numphi,4,0);/*chop stick one signal sent*/
			send(fd1,&numphi,4,0);/*chop stick two signal sent*/
			printf("Server sent a signal");
			if(dnum2==1)
			{
				recv(fd,&num,4,0);/*chop stick one signal recived*/
				recv(fd1,&num1,4,0);/*chop stick two signal recived*/
				if(num)
				{
					if(num1)
					{
						printf("second philoser is eating");
						printf("Enter the eating time");
						scanf("%d",&t2);
						sleep(t2);
					}
				}
			}
			else
			{
				break;
			}
			break;
			case 3:
			send(fd1,&numphi,4,0);/*chop stick two signal sent*/
			send(fd2,&numphi,4,0);/*chop stick three signal sent*/
			printf("Server sent a signal");
			if(dnum3==1)
			{
				recv(fd1,&num1,4,0);/*chop stick two signal recived*/
				recv(fd2,&num2,4,0);/*chop stick three signal revived*/
				if(num1)
				{
					if(num2)
					{
						printf("Third philoser is eating");
						printf("Enter the eating time");
						scanf("%d",&t3);
						sleep(t3);
					}
				}
			}
			else
			{	
				break;
			}
			break;
			case 4:
			send(fd2,&numphi,4,0);/*chop stick three signal sent*/
			send(fd3,&numphi,4,0);/*chop stick four signal sent*/
			printf("Server sent a signal");
			if(dnum4==1)
			{
				recv(fd2,&num2,4,0);/*chop stick three signal recived*/
				recv(fd3,&num3,4,0);/*chop stick four signal recived*/
				if(num2)
				{
					if(num3)
					{
						printf("Fourth philoser is eating");
						printf("Enter the eating time");
						scanf("%d",&t4);
						sleep(t4);
					}
				}
			}
			else
			{
				break;
			}
			break;
			case 5:
			send(fd3,&numphi,4,0);/*chop stick four signal sent*/
			send(fd4,&numphi,4,0);/*chop stick five signal sent*/
			printf("Server sent a signal");
			if(dnum5==1)
			{
				recv(fd3,&num3,4,0);/*chop stick four signal recived*/
				recv(fd4,&num4,4,0);/*chop stick five signal recived*/
				if(num3)
				{
					if(num4)
					{
						printf("Fifth philoser is eating");
						printf("Enter the eating time");
						scanf("%d",&t5);
						sleep(t5);
					}
				}
			}
			else
			{
				break;
			}
			break;
			default:
			{
				printf("Only 5 philosopher are present");
			}
		}
	}
}

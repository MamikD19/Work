#include<stdio.h>
#include<sys/types.h>
int main()
{
	int p=fork();
		if(p==0)
		{
			printf("child%d %d\n",getpid(),getppid());
		}
			else if(p>0)
			{
				sleep(10);
				printf("parent%d %d\n",getpid(),getppid());
			 }
}

#include<stdio.h>
#include<sys/types.h>
main()
{
	int id;
	id=fork();
	if(id==0)
	{
		printf("the child id is %d\n",getpid());
		printf("the  parent process id is %d\n",getppid());
	}
}

#include<stdio.h>
#include<sys/types.h>
main()
{
	int id,id2,id3;
	id=fork();
	id2=fork();
	id3=fork();
	if(id>0)
	{
		printf("the parent id is %d\n",getpid());
	}
	if(id2>0)
	{
		printf("the parent id is %d\n",getpid());
	}
	if(id3>0)
	{
		printf("the parent id is %d\n",getpid());
	}	
}

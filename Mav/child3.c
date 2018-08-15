#include<stdio.h>
#include<sys/types.h>
main()
{
	int id,id2,id3;
	id=fork();
	if(id==0)
	{
		printf("the child id is %d\n",getpid());
	}
	else if(id>0)
	{
		id2=fork();
		if(id2==0)
		{
			printf("the parent id is %d\n",getpid());
		}
		else if(id2>0)
		{
			id3=fork();
			if(id3==0)
			{
				printf("the parent id is %d\n",getpid());
			}
		}
	}	
}

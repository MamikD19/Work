#include<stdio.h>
#include<sys/types.h>
main()
{
	int id;
	id=fork();
	printf("the  id is %d\n",id);
}

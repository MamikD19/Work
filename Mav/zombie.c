#include<stdio.h>
int main()
{
int p=fork();
printf("create child");
if(p==0)
{ printf("in parent %d %d\n",getid(),getppid());
}
else if(p>0)
{
sleep(10);
printf("in child");
}
}

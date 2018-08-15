#include<stdio.h>
main()
{
int p[20],f[5]={99,99,99,99,99},i,j,c=-1,m,n,t=0;
printf("Enter the no of pages:");
scanf("%d",&m);
printf("\nEnter the no of frames:");
scanf("%d",&n);
printf("\nEnter the pages");
for(i=0;i<m;i++)
scanf("%d",&p[i]);
printf("\nThe various allocations for %d frames are as follows:",n);
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
if(f[j]==p[i])
break;
}
if(j==n)
{
	t++;
c=(c+1)%n;
f[c]=p[i];
for(j=0;j<n;j++)
printf(" %d",f[j]);
}
}
printf("\nNo of page fault %d",t);
}

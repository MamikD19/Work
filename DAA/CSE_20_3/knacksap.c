#include<stdio.h>
struct job
{
	int p,w;
	float r,x;
}j[10],t;
main()
{
	int i,k,m,n;
	float cost=0.0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter the size\n");
	scanf("%d",&m);
	printf("Enter the value of the following");
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&j[i].p,&j[i].w);
		j[i].r=(float)j[i].p/j[i].w;
		j[i].x=0;
	}
	for(i=1;i<n;i++)
	{
		for(k=i+1;k<=n;k++)
		{
			if(j[i].r<j[k].r)
			{
				t=j[i];
				j[i]=j[k];
				j[k]=t;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		if(j[i].w>m)
		break;
		j[i].x=1;
		m=m-j[i].w;
		cost=cost+j[i].p*j[i].x;
	}
	if(i<=n)
	{
		j[i].x=(float)m/j[i].w;
		cost=cost+j[i].p*j[i].x;
	}
	printf("the cost is %f\n",cost);
	for(i=1;i<=n;i++)
	printf("the x array is %f\n",j[i].x);
}

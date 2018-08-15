#include<stdio.h>
int g=0,tott=0,totw=0;
float ft=1,fw=1;
int main()
{
	int n,i;
	struct pro
	{
		int b,w,t;
	}p[10];
	printf("Enter the number of processes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i].b);
	}
	for(i=0;i<n;i++)
	{
		g=g+p[i].b;
		p[i].t=g;
		p[i].w=p[i].t-p[i].b;
		tott+=p[i].t;
		totw+=p[i].b;
	}
	ft=(float)tott/n;
	fw=(float)totw/n;
	printf("average turn around time is %f\n",ft);
	printf("average turn wating time is %f\n",fw);
}

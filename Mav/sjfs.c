#include<stdio.h>
int g=0,tott=0,totw=0,n;
float ft,fw;
struct pro
	{
		int b,w,t,nb;
	}p[10];
void sort()
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=1+i;j<n;j++)
		{
			if(p[i].b>p[j].b)
			{
			temp=p[i].b;
			p[i].b=p[j].b;
			p[j].b=temp;
			}
		}
	}
	
}
float  calcu()
{
 int i;
	for(i=0;i<n;i++)
	{
		g=g+p[i].b;
		p[i].t=g;
		p[i].w=p[i].t-p[i].b;
		tott+=p[i].t;
		totw+=p[i].w;
	}
	ft=(float)tott/n;
	fw=(float)totw/n;
	printf("average turn around time is %f\n",ft);
	return fw;
}
int main()
{
	int i ;
	float net;
	printf("Enter the number of processes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i].b);
	}
	sort();
	net=calcu();
	printf("average turn wating time is %f\n",net);
}

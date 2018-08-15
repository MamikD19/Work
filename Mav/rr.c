#include<stdio.h>
int g=0,tott=0,totw=0,n,tq;
float ft,fw;
struct pro
	{
		int b,w,t,r;
	}p[10];
float  calcu()
{
	int hb=p[0].b,i,m,j;
	for(i=0;i<n;i++)
	{
		if(p[i].b>hb)
		hb=p[i].b;
	}
	m=hb/tq;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i].r>tq)
			{
			g=g+tq;
			p[i].r=p[i].r-tq;
			}
			else if(p[i].r>0)
			{
		 		g=g+p[i].r;
				p[i].r=0;
				p[i].t=g;;
				p[i].w=p[i].t-p[i].b;
		  		tott+=p[i].t;
			totw+=p[i].w;
			}
		}
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
	printf("Enter time quantum\n");
	scanf("%d",&tq);
	printf("Enter the processes\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i].b);
		p[i].r=p[i].b;
	}
	net=calcu();
	printf("average turn wating time is %f\n",net);
}

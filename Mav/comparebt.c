#include<stdio.h>
int g=0,tott=0,totw=0,n,tq;
float ft,fw;
	struct pro
	{
		int b,w,t,nb,r;
		char name;
		int at,bt,ct,wt,tt,priority;
		int processed;
		float ntt;
	}p[10];
float fcfs()
{
	int n,i;

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
	return fw;
}
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
float  calcu1()
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
float sjfs()
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
	net=calcu1();
	return net;
}
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
float rr()
{
	int i ;
	float net1;
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
	net1=calcu();
	return net1;
}
void sortByArrival()
{
struct process temp;
int i,j;
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
{
if(p[i].at>p[j].at)
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
}
}
}

float priority()
{
int i,j,time=0,sum_bt=0,largest;
char c;
        float avgwt=0;
 printf("Enter no of processes:");
 scanf("%d",&n);
 for(i=0,c='A';i<n;i++,c++)
 {
 p[i].name=c;
 printf("\nEnter the arrival time , burst time, priority of process%c: ",p[i].name);
 scanf("%d%d%d",&p[i].at,&p[i].bt,&p[i].priority);
 p[i].processed=0;
 sum_bt+=p[i].bt;
 
}
sortByArrival();
p[9].priority=-9999;
printf("\nName\tArrival Time\tBurst Time\tPriority\t WT \t TT \t NTT");
  for(time=p[0].at;time<sum_bt;)
  {
    largest=9;
    for(i=0;i<n;i++)
    {
      if(p[i].at<=time && p[i].processed!=1 && p[i].priority>p[largest].priority)
        largest=i;
    }
      time+=p[largest].bt;
  p[largest].ct=time;
          p[largest].wt=p[largest].ct-p[largest].at-p[largest].bt;
     p[largest].tt=p[largest].ct-p[largest].at;
     p[largest].ntt=((float)p[largest].tt/p[largest].bt);
    p[largest].processed=1;
    avgwt+=p[largest].wt;
printf("\n%c\t\t%d\t\t%d\t\t%d\t%d\t%d\t%f",p[largest].name,p[largest].at,p[largest].bt,p[largest].priority,p[largest].wt,p[largest].tt,p[largest].ntt);
}
return avgwt;
}
int main()
{
	float fc,sj,pri,r;
	fc=fcfs();
	sj=sjfs();
	pri=priority();
	r=rr.c();
	if(fc>sj && fc>pri && fc>r)
	printf("FSFC is the best algorithm %f",fc);
	else if(sj>fc && sj>pri && sj>r)
	printf("SJF is the best algorithm %f",sj);
	else if(pri>fc && pri>sj && pri>r)
	printf("priority is the best algorith %f",pri);
	else
	printf("RR is the best algorithm %f",r);
}

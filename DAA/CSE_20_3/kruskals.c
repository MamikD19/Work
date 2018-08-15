#include<stdio.h>
int P[10],R[10];
struct kus
{
	int u,v,w;
}e[10],t;
main()
{
int i,j,E,V;
printf("Enter the number of edge\n");
scanf("%d",&E);
printf("Enter the number of vertex\n");
scanf("%d",&V);
	for(i=0;i<E;i++)	
	{
		printf("Enter the starting vertex , end vertex and weight");
		scanf("%d%d%d",&e[i].u,&e[i].v,&e[i].w);
	}
		for(i=0;i<E-1;i++)
		{
			for(j=i+1;j<E;j++)
			{
				if(e[i].w>e[j].w)
				{
					t=e[i];
					e[i]=e[j];
					e[j]=t;
				}
			}
		}
kruskals(V,E);
return 0;
}
int kruskals(int V ,int  E)
{
		int i,c=0;
		for(i=1;i<=V;i++)
		makeset(i);
		for(i=0;i<E;i++){
		if(find(e[i].u)!=find(e[i].v))
		{
			printf("\t%d\t%d\n",e[i].u,e[i].v);
			c=c+e[i].w;
		union1(e[i].u,e[i].v);
		}

		}
	printf("\n%d",c);
}
void link(int u,int v)
{
	if(R[u]>R[v])
	P[v]=u;
	else
	P[u]=v;
		if(R[u]==R[v])
		R[v]+=1;
}
int find(int x)
{
	if(x!=P[x])
	find(P[x]);
	return P[x];
}
void union1(int u,int v)
{
	link(find(u),find(v));
}

void makeset(int v)
{
	R[v]=0;
	P[v]=v;
} 

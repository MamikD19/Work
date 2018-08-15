
#include<stdio.h>
int d[10],edge[10][10],g[10][10];
void Belmenford(int V,int e, int s)
{
	int f=1;
	int i,j,u,v;
	for(i=1;i<=V;i++)
	d[i]=999;
	d[s]=0;
	for(i=1;i<V;i++)
	{
		for(j=1;j<=e;j++)
		{
			u=edge[j][1];
			v=edge[j][2];
			if(d[u]+g[u][v]<d[v])
			d[v]=d[u]+g[u][v];
		}
	}
	for(i=1;i<=e;i++)
	{
		u=edge[i][1];
		v=edge[i][2];
		if(d[u]+g[u][v]<d[v])
		f=0;
	}
	if(f)
	{
		for(i=1;i<=V;i++)
		printf("%d ",d[i]);
	}
}
main()
{
	int i,j,v,e,k=1,a,b,w;
	printf("Enter the value of vertex\n");
	scanf("%d",&v);
	printf("Enter the value of edge\n");
	scanf("%d",&e);
	for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
		{
			g[i][j]=0;
		}
	}
	for(i=1;i<=e;i++)
	{
		scanf("%d%d%d",&a,&b,&w);
		g[a][b]=w;
		edge[k][1]=a;
		edge[k][2]=b;
		k++;
	}
Belmenford(v,e,1);
}

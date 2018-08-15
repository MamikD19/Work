#include<stdio.h>
int G[10][10],n,m,x[10];
void mColoring(int);
void next_value(int);
//main
int main()
{
	int i,j,u,v,e;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value of e");
	scanf("%d",&e);	
	printf("Enter the value of m");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			G[i][j]=0;
		}
	}
	for(i=1;i<=e;i++)
	{
		printf("Enter the start nd end vertex");
		scanf("%d%d",&u,&v);
		G[u][v]=1;
		G[v][u]=1;
	}
	mColoring(1);
}
//mcolouring function
void mColoring(int k)
{
	int i;
	while(1)
	{
		next_value(k);
		if(x[k]==0)
		return;
		if(k==n)
		{
			for(i=1;i<=k;i++)
			{
				if(i==n)
				printf("%d \n",x[i]);
				else
				printf("%d ,",x[i]);
			}
		}
		else
		{
			mColoring(k+1);
		}
	}
}
//nextvalue function
void next_value(int k)
{
	int j;
	while(1)
	{
		x[k]=(x[k]+1)%(m+1);
		if(x[k]==0)
		return;
		for(j=1;j<=n;j++)
		{
			if((G[j][k]!=0)&&(x[j]==x[k]))
				break;
		}
		if(j==(n+1))
		break;
	}
}


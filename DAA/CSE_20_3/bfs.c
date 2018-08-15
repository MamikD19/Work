#include<stdio.h>
#define initial 0
#define waiting 1
#define visited 2
#define MAXSIZE 5
void bfs(int);
int empty();
void insert(int);
int del_queue();
int queue[10],state[10],G[10][10];
int f=-1,r=-1,x,n;
//bfs function
void bfs(int v)
{
	int i;
	insert(v);
	state[v]=waiting;
	while(!empty())
	{
		x=del_queue();
		printf("%d ",x);
		state[v]=visited;
		for(i=1;i<=n;i++)
		{
			if((G[x][i]!=0)&&(state[i]==initial))
			{
				insert(i);
				state[i]=waiting;
			}
		}
	}
}
//empty function
int empty()
{
	if(f==-1 || f>r)
		return 1;
	else
		return 0;
}
//insert function
void insert (int v)
{
	if(r== MAXSIZE-1)
		return;
	else
	{
		if(f==-1)
			f++;
		r++;
		queue[r]=v;
	}
}
//delete queue
int del_queue()
{
	if(f==-1 || f>r)
		return -1;
	else
	{
		x=queue[f];
		f++;
		return x;
	}
}
//main
void main()
{
	int i,j,e,u,v;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value of e");
	scanf("%d",&e);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			G[i][j]=0;
		}
	}
	for(i=1;i<=e;i++)
	{
		printf("Enter the value of u and v");
		scanf("%d%d",&u,&v);
		G[u][v]=1;
		G[v][u]=1;
	}
	for(i=1;i<=n;i++)	
	state[i]=initial;
	bfs(1);
}

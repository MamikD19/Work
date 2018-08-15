#include<stdio.h>
int x[20];
//n queen
void nqueen(int r , int n)
{
	int c;
	for(c=1;c<=n;c++)
	{
		if(place(r,c))
		{
			x[r]=c;
			if(r==n)
			{
			printf("the set is\n");
			display(n);
			printf("\n");
			}
			else
			nqueen(r+1,n);
		}
	}
}
//place
int place(int r , int c)
{
	int i;
	for(i=1;i<=r-1;i++)
	{
		if(x[i]==c)
		return 0;
		else if(abs(i-r)==abs(x[i]-c))
		return 0;
	}
	return 1;
}
//display
int display(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(x[i]==j)
			printf("Q\t");
			else
			printf("_\t");
		}
	printf("\n");
	}
}
//main
main()
{
	int n;
	printf("\nEnter thye number of queen");
	scanf("%d",&n);
	nqueen(1,n);
}


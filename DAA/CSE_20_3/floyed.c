#include<stdio.h>
int arr[20][20];
//function
void floyd(int n)
{
	int i,j,k;
	for(k=1;k<n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(arr[i][j]+arr[k][j]<arr[i][j])
				arr[i][j]=arr[i][k]+arr[k][j];
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}		

}
//main body
main()
{
	int n,e,i,u,v,w,j,k;
	printf("Enter the vertices");
	scanf("%d",&n);
	printf("Enter the edge");
	scanf("%d",&e);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
			arr[i][j]=0;
			else
			arr[i][j]=999;
		}
	}
	for(i=1;i<=e;i++)
	{
		printf("Enter the first and last vertex and weight");
		scanf("%d %d %d",&u,&v,&w);
	}
	floyd(n);
}

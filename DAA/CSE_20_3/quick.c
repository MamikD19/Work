#include<stdio.h>
int arr[20];
//partition
int partition(int l,int u)
{
int x,i,j,temp;
x=arr[u];
i=l-1;
for(j=l;j<=u-1;j++)
{
	if(arr[j]<=x)
	{
		i=i+1;
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}
temp=arr[u];
arr[u]=arr[i+1];
arr[i+1]=temp;
return(i+1);
}
void qs(int l,int u)
{
	int q;
	if(l<u)
	{
		q=partition(l,u);
		qs(l,q-1);
		qs(q+1,u);
	}
}
//main
main()
{
int i,n;
printf("Enter the number of the array");
scanf("%d",&n);
printf("Enter the element of the array");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
qs(0,n-1);
printf("sorted array is");
for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}

#include<stdio.h>
int arr[20];
//merge
int merge(int l , int m , int u)
{
	int i,k,j,t,brr[20];
	i=k=l,j=m+1;
	while(i<=m && j<=u)
	{
		if(arr[i]<arr[j])
		brr[k++]=arr[i++];
		else
		brr[k++]=arr[j++];
	}
	if(j>u)
	{
		for(t=i;t<=m;t++)
		brr[k++]=arr[t];
	}
	else
	{
		for(t=j;t<=u;t++)
		brr[k++]=arr[t];
	}
	for(t=l;t<=u;t++)
	arr[t]=brr[t];
}
//merge sort
void ms(int l , int n)
{
	int m;
	if(l<n)
	{
		m=(l+n)/2;
	 	ms(l,m);
		ms(m+1,n);
		merge(l,m,n);
	}
}
//main
main()
{
	int n,i;
	printf("Enter the length of array");
	scanf("%d",&n);
	printf("Enter the element of array");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	ms(0,n-1);	
	printf("the sorted array is \n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
}

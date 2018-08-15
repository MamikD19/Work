#include<stdio.h>
int max=0 ,min=0 , arr[20],n,i,l,u,m;
//function
void mm(l , u)
{
	int max1 , min1;
	if(l==u)
	max=min=arr[l];
	else
	{
		m=(l+u)/2;
		mm(l,m);
		max1=max;
		min1=min;
		mm(m+1,u);
	if(max1>max)
		max=max1;	
	if(min1<min)
		min=min1;
	}	
}
//main_method
main()
{
printf("Enter the length of the array");
scanf("%d",&n);
printf("Enter the element of the array");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
mm(0,n-1);
printf("the maximum elemen is %d",max);
printf("the minimum elemen is %d",min);
}

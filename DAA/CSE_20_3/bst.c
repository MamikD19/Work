#include<stdio.h>
main()
{
int arr[20],i,mid=0,up,low=0,search;
printf("Enter the number of element of the array\n");
scanf("%d",&up);
printf("Enter the element of the array\n");
for(i=0;i<up;i++)
{
scanf("%d",&arr[i]);
}
printf("The element of the array are\n");
for(i=0;i<up;i++)
{
printf("%d\n",arr[i]);
}
printf("The element to be searched\n");
scanf("%d",&search);
while(low<=up)
{
mid=(low+up)/2;
if(arr[mid]==search)
{
printf("the element is found in the position %d\n",mid);
break;
}
else if(arr[mid]>search)
 up=mid-1;
else
low=mid+1;
}
if(low>up)
printf("The element not found");
}

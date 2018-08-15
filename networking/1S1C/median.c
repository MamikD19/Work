#include<stdio.h>
 
int main() {
 int arr1[30], arr2[30], res[60];
 int i, j, k, n1, n2,m,median1,median2,median3,av;
 
 printf("\nEnter no of elements in 1st array :");
 scanf("%d", &n1);
 for (i = 0; i < n1; i++) {
 scanf("%d", &arr1[i]);
 }
 
 printf("\nEnter no of elements in 2nd array :");
 scanf("%d", &n2);
 for (i = 0; i < n2; i++) {
 scanf("%d", &arr2[i]);
 }
 
 i = 0;
 j = 0;
 k = 0;
 
 // Merging starts
 while (i < n1 && j < n2) {
 if (arr1[i] <= arr2[j]) {
 res[k] = arr1[i];
 i++;
 k++;
 } else {
 res[k] = arr2[j];
 k++;
 j++;
 }
 }
 
 /* Some elements in array 'arr1' are still remaining
 where as the array 'arr2' is exhausted */
 
 while (i < n1) {
 res[k] = arr1[i];
 i++;
 k++;
 }
 
 /* Some elements in array 'arr2' are still remaining
 where as the array 'arr1' is exhausted */
 
 while (j < n2) {
 res[k] = arr2[j];
 k++;
 j++;
 }
 
 //Displaying elements of array 'res'
 m=n1+n2;
 printf("\nMerged array is :\n");
 for (i = 0; i < m; i++)
 printf("%d \n", res[i]);
 if(m%2!=0)
 {
 median1=res[(m-1)/2];
 printf("Median is %d",median1);
 }
 else
 {
  median2=res[(m-1)/2];
  median3=res[m/2];
  av=(median2+median3)/2;
  printf("The median is %d",av);
 }
 return (0);
 
}

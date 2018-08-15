#include<stdio.h>
int s[10][10],m[10][10],n,p[100],l,j,i,k,q;
//matrix chain function
void matrix_chain(int p[100] ,int n)
{
for(i=1;i<=n;i++)
{
m[i][i]=0;
}
for(l=1;l<n;l++)
{
for(i=1;i<=n-l;i++)
{
j=i+l;
m[i][j]=9999;
for(k=i;k<=j-1;k++)
{
q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
if(q<m[i][j])
{
m[i][j]=q;
s[i][j]=k;
}
}
}
}
}
//parenthesis function
void optimal_paren(int i,int j)
{
if(i==j)
{
printf("A%d",i);
}
else
{
printf("(");
optimal_paren(i,s[i][j]);
optimal_paren(s[i][j]+1,j);
printf(")");
}
}
//main body
main()
{
printf("Enter the number of element of the array");
scanf("%d",&n);
printf("Enter the dimension of the array");
for(i=0;i<=n;i++)
{
scanf("%d",&p[i]);
}
matrix_chain(p,n);
printf("%d",m[1][n]);
optimal_paren(1,n);
}


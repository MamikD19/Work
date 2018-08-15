#include<iostream>
using namespace std;
int main()
{
int a,fact=1,i;
if(a==0)
cout<<"fact=1";
else
{
cout<<"enter a number";
cin>>a;
for(i=1;i<=a;i++)
{
fact=fact*i;
}
cout<<"factorial of a number"<<fact;
}
return 0;
}

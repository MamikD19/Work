#include<iostream>
using namespace std;
int main()
{
int n,am=0,b=1,dup;
cout<<"Enter a number";
cin>>n;
dup=n;
do
{
b=n%10;
am=am+(b*b*b);
n/=10;
}while(n!=0);
if(dup==am)
cout<<"Amstrong number";
else
cout<<"not a amstrong number";
return 0;
}

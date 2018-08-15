#include<iostream>
using namespace std;
class fibbo
{
public:
int a,b,c,l,i,n;
public:

void cal()
{
a=0;
b=1;
cout<<"Enter the limit";
cin>>n;
cout<<"01";
for(i=1;i<=n;i++)
{
c=a+b;
cout<<c;
a=b;
b=c;
}
}
};
int main()
{
fibbo f;
f.cal();
}


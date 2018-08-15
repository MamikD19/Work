#include<iostream>
using namespace std;
int main()
{
int a,b,c,ch;
cout<<"Enter the first number";
cin>>a;
cout<<"Enter second number";
cin>>b;
cout<<"Enter the choice 1 for sum 2 for sub 3 for mul 4 for div";
cin>>ch;
switch(ch)
{
case 1:
c=a+b;
cout<<"the sum is "<<c;
break;
case 2:
c=a-b;
cout<<"the subtraction is"<<c;
break;
case 3:
c=a*b;
cout<<"the multiplication is"<<c;
break;
case 4:
c=a/b;
cout<<"the division is"<<c;
break;
default:
cout<<"wrong choice";
}
return 0;
}

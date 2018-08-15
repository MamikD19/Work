#include<iostream>
using namespace std;
class Largest
{
public:
int a,b,c,l;

public:
void great()
{
cin>>a>>b>>c;
l=a>b?a>c?a:c:b>c?b:c;
cout<<"the largest num,ber is"<<l;
}
};
int main()
{
Largest l;
l.great();
return(0);
}


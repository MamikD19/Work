#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the value of  a ";
	cin>>a;




	cout<<"Enter the value of b";
	cin>>b;
	try
	{
		if((a>b)!=0){
		c=a-b;
                cout<<"a-b"<<c;}
		else
		{
			
			throw(c);
		}
	}
	catch(int u)
	{
		cout<<"the result is not applicable"<<u;
	}
	return(0);
}
		

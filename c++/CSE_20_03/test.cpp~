#include<iostream>
using namespace std;
class Test
{
	public:
	int l,b,h,area;
	public:
	Test()
	{
		l=0;
		b=0;
		h=0;
		area=0;
		cout<<"Start"<<endl;
	}
	void insert()
	{
		cout<<"Enter the length"<<endl;
		cin>>l;
		cout<<"Enter the breath"<<endl;
		cin>>b;
		cout<<"Entr the height"<<endl;
		cin>>h;
	}
	void arr()
	{
		area=l*b*h;
		cout<<"the area is "<<area<<endl;
	}
	~Test()
	{
		cout<<"Destroy"<<endl;
	}
};
int main()
{
	Test t1;
	Test* t=new Test[0];
	t1.insert();
	t1.arr();
	delete []t;
	return 0;
}


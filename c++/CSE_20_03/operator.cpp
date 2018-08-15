#include<iostream>
using namespace std;
class test
{
	public:
	int l,b,h,v;


	public:
	int length(int a)
	{
		l=a;
	}
	int breath(int br)
	{
		b=br;
	}
	int height(int c)
	{
		h=c;
	}
	int vol()
	{
		v=l*b*h;
		return v;
	}
	test operator + (const test &brr)
	{
		test t1;
		t1.l=this->l + brr.l;
		t1.b=this->b + brr.b;
		t1.h=this->h + brr.h;
	}
};
	int main()
	{
		double v1=0.0,v2=0.0,v3=0.0,volume=0.0;
		test t2;
		test t3;
		test t4;
	//	test t5;
		t2.length(4);
		t2.breath(25);
		t2.height(10);
		v1=t2.vol();
		t3.length(4);
		t3.breath(4);
		t3.height(4);
		v2=t3.vol();
		t4.length(5);
		t4.breath(5);
		t4.height(10);
		v3=t4.vol();
		volume=v1+v2+v3;
		cout<<"the voulume is "<<volume;
	}

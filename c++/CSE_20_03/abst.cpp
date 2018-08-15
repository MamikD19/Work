#include<iostream>
using namespace std;
class Test
{
	protected:
		double length;
		double breath;
		double height;
	public:
		void Setdata(double l , double b,double h)
		{
			length=l;
			breath=b;
			height=h;
		}
		virtual void Display()=0;
};
class Test2 : public Test
{
	public:
		double vol;
	public:
		void Volume()
		{
			vol=length*breath*height;
		}
		void Display()
		{
			cout<<"the volume is"<<vol;
		}
};
int main()
{
	Test2 t1;
	t1.Setdata(10,10,10);
	t1.Volume();
	t1.Display();
	return 0;
}

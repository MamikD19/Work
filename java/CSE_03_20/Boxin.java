import java.lang.*;
import java.util.*;
class Box1
{
	double length,breath,height,vol;
	Box1()
	{
		length=10;
		breath=10;
		height=10;
	}
	Box1(double a)
	{
		length=10;
		breath=10;
		height=a;
	}
	void set_data()
	{
		Scanner sc= new Scanner(System.in);
		length=sc.nextDouble();
		breath=sc.nextDouble();
		height=sc.nextDouble();
	}
	void volume()
	{
		vol=length*breath*height;
		System.out.println("the volume of the box is"+vol);
	}
}
class Boxex extends Box1
{
	double weight;
	Boxex()
	{
		length=-1;
		breath=-1;
		height=-1;
		weight=-1;
	}
	Boxex(double a1 , double b1 , double c1 , double d1)
	{
		length=a1;
		breath=b1;
		height=c1;
		weight=d1;
	}
	Boxex(double aa , double bb)
	{
		length=aa;
		breath=aa;
		height=aa;
		weight=bb;
	}
	void show()
	{
		System.out.println("Length"+length);
	}
}
class Boxin extends Boxex
{
	public static void main(String args[])throws Exception
	{
		Box1 b=new Box1();
		Box1 bb=new Box1(84.0);
		System.out.println("the default value is");
		b.volume();
		System.out.println("the new value is");
		bb.volume();
		System.out.println("Enter the dimension");
		b.set_data();
		b.volume();
		Boxex b2 =new Boxex();
		b2.volume();
	}
}

import java.lang.*;
import java.util.*;
import java.io.*;
class Outer
{
	int a,b,cal;
	class Inner
	{
		void Set_data()
		{
			Scanner sc=new Scanner(System.in);
			a=sc.nextInt();
			b=sc.nextInt();
		}
		void Calculate()
		{
			cal=a*b;
			System.out.println("The area is"+cal); 
		}
	}
	void Display()
	{
		Inner in=new Inner();
		in.Set_data();
		in.Calculate();
	}
}
class Area
{
	public static void main(String args[])throws IOException
	{
	    Outer ou=new Outer();
	    ou.Display();
	}
}

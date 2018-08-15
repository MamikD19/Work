import java.lang.*;
import java.util.*;
import java.io.*;
class Outer
{
	int a,b,cal;
		void Set_data()
		{
			class Inner
			{
				
			void Calculate()
			{
				Scanner sc=new Scanner(System.in);
				a=sc.nextInt();
				b=sc.nextInt();
				cal=a*b;
				System.out.println("The area is"+cal); 
			}
			}
			Inner i=new Inner();
			i.Calculate();
		}
}
class Area2
{
	public static void main(String args[])throws IOException
	{
	Outer ou=new Outer();
	ou.Set_data();
	}
}

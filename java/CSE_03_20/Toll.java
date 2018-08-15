import java.util.*;
import java.lang.*;
import java.io.*;
class Tollbooth
{	
	int numcars;
	double totalmoney;
	Tollbooth()
	{
		numcars=0;
		totalmoney=0.0;
	}
	void Paying_car()
	{	
		numcars++;
		totalmoney=totalmoney+(numcars*.5);
	}
	void Nonpaying_cars()
	{
		numcars++;
		totalmoney=totalmoney+(numcars);
	}
	void Display()
	{
		System.out.println("total number of cars "+numcars);
		System.out.println("total money is "+totalmoney);
	}
}
class Toll
{
	public static void main(String args[])throws IOException
	{
		int n;
		Scanner sc= new Scanner(System.in);
		Tollbooth tb=new Tollbooth();
		System.out.println("Enter the 1 for seeing the result of paying cars Enter 2 for seeing the result of non paying cars");
		n=sc.nextInt();
		switch(n)
		{
			while(n!=0)
			{
			case 1:
			tb.Paying_car();
			tb.Display();
			break;
			case 2:
			tb.Nonpaying_cars();
			tb.Display();
			break;
			default:
			{
			System.out.println("Data cant be shown");
			break;
			}
		}
		}
	}
}

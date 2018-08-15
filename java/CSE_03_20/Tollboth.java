import java.lang.*;
import java.io.*;
import java.util.*;
class Tolldemo
{
	int totalcars;
	double totalmoney;
	Tolldemo
	{
		totalcars=0;
		totalmoney=0.0;
	}
	void paying_cars()
	{
		totalcars++;
		totalmoney=totalmoney+(totalcars+(totalmoney*.5));
	}
	void Nonpaying_cars()
	{
		totalcars++;
		totalmoney=totalmoney+totalcars;
	}	
	void Display()
	{
		System.out.println("the total number of cars are"+totalcars);
		System.out.println("the total cost of cars are"+totalmoney);
	}
}
class Tollboth
{
	public static void main(String args[])throws IOException
	{
		int n,ch;
		char c;
		Tolldemo td=new Tolldemo();
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter c to continue else e to get result");
		System.out.println("Enter 1 to initiate paying cars and 2 to initiate non paying cars");
		for(;;)
		{
		if(c=='c')
		{
		switch(ch)
		{
			case 1:
			td.Paying_cars();
			break;
			case 2:
			td.Nonpaying_cars();
			break;
			default:	
			System.out.println("Wrong choice");		
			break;
		}
		}
		else
		{
		td.display();
		break;
		}
	}
}
}

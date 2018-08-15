import java.io.*;
import java.lang.*;
import java.util.*;
class Call
{
	int Test()
	{
		int i=0;
		for(;;)
		{
		i++;
		return i;
		}
	}
}

class Inter
{
	public static void main(String args[])
	{
		//declaration of the variables
		int x,n,p,ca,j=0,count=0;
		int arr[]=new int[50];
		double total=0,mul=1,t1=0;
		Scanner sc= new Scanner(System.in);
		Call c=new Call();
		x=c.Test();
		ca=sc.nextInt();//test cases
		while(ca!=0)
		{
			n=sc.nextInt();
			while(n<=0)
			{
				j++;
				p=sc.nextInt();
				arr[j]=p;
				n--;
				t1=t1+(Math.pow((arr[j]*x),(Math.pow(((n+arr[j+1])*x),(n-1)))));
			}
			if(t1==0)
			{
				count++;
				System.out.println("Case #"+ca+": "+count);
				System.out.println(t1);
			}
			else
			{
				count=0;
				System.out.println("Case #"+ca+": "+count);
			}
			ca--;
		}
	}
}
			

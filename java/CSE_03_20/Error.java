import java.lang.*;
import java.io.*;
class Error
{
	public static void main(String args[])throws Exception
	{
		int a=10,b=0,c;
		try
		{
			c=a/b;
		}catch(Exception e)
		{
		System.out.println("ERROR 404 "+e);
		}
	}
}

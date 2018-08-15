import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class Test12 {
    /*
     * Complete the function below.
    */
  public static int lengthofPalindrome(String input1)
    {
	    //Write code here
	   int a,j,count=0,count2=0;
	   char ch;
	   char[] arr=input1.toCharArray();char[] arr2=new char[10000] ;
	   
	    a=input1.length();
	    for(int i=0;i<a;i++)
	    {
	        ch=input1.charAt(i);
	        arr[i]=ch;
	        j=0;
	        while(j<=a)
	        {
	        if(arr[i]==arr[j])
	        {
	        count++;
	        if(count==2)
	        {
	        arr2[i]=arr[i];
	        count2++;
	        }
	        j++;
	        }
	           
	        }
	    }
	    return count2;
    }
public static void main(String[] args) throws IOException{
        Scanner in = new Scanner(System.in);
        int output = 0;
        String ip1 = in.nextLine().trim();
        output = lengthofPalindrome(ip1);
        System.out.println(String.valueOf(output));
    }
}


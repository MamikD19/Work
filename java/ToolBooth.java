import java.lang.*;
import java.io.*;
import java.util.*;
class ToolBoothDemo {
    int totalcars;
    double totalmoney;

    ToolBoothDemo() {
        totalcars = 0;
        totalmoney = 0.0;
    }

    void Paying_cars() {
        totalcars++;
        totalmoney = totalmoney + (totalcars + (totalmoney * .5));
    }

    void Nonpaying_cars() {
        totalcars++;
        totalmoney = totalmoney + totalcars;
    }

    void Display() {
        System.out.println("the total number of cars are" + totalcars);
        System.out.println("the total cost of cars are" + totalmoney);
    }

}
class ToolBooth
{
    public static void main(String args[])throws IOException
    {
        int ch;
        int c;
        ToolBoothDemo td=new ToolBoothDemo();
        Scanner sc=new Scanner(System.in);


        for(;;)
        {
            System.out.println("Enter 8 to continue else 9 to get result");
            c=sc.nextInt();
            if(c==8)
            {
                System.out.println("Enter 1 to initiate paying cars and 2 to initiate non paying cars and 3 to display");
                ch=sc.nextInt();
                switch(ch)
                {

                    case 1:
                        td.Paying_cars();
                        break;
                    case 2:
                        td.Nonpaying_cars();
                        break;
                    case 3:
                        td.Display();
                        break;
                    default:
                        System.out.println("Wrong choice");
                        break;
                }
            }
            else {
                td.Display();
                break;
            }
        }
    }
}
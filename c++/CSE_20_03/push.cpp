#include<iostream>
#define MAXSIZE 6
int top=-1;
using namespace std;
class Stack
{
	public:
	int arr[MAXSIZE],i;
	public:
	int Isempty()
	{	
		if(top==-1)
		return 1;
		else
		return 0;
	}
	void Push(int n)
	{
		if(Isfull())
		{
			cout<<"\nStack is full\n";
		}
		else
		{
			++top;
			arr[top]=n;
			cout<<n<<"\npushed\n";
		}
	}
	int Isfull()
	{
		if(top==MAXSIZE-1)
		return 1;
		else
		return 0;
	}
	void Pop()
	{
		int temp;
		if(Isempty())
		{
			cout<<"\nStack is empty\n";
		}
		else
		{
			temp=arr[top];
			top--;
			cout<<"\nthe poped elemnt is\n "<<temp;
			
		}
	}
};
class Stack1:public Stack
{	
	public:
	int i;
	public:
	void Display()
	{
		if(Isempty())
		{
			cout<<"\n stack is empty\n";
		}

		
		for(i=top;i>=0;i--)
		{
			cout<<"\n"<<arr[i];
		}
	}
};

main()
{
	
	Stack1 st;
	int choice,num;
	do
	{
		cout<<"\npress 1 to push\n press 2 to pop\n press 3 to display and ctrl+z to exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<"Enter the ";
			cin>>num;
			st.Push(num);
			break;
			case 2:
			st.Pop();
			break;
			case 3:
			st.Display();
			break;
			default:
			cout<<"Wrong choice";
			break;
		}
	}while(1);
}

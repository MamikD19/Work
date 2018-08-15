#include<iostream>
using namespace std;
struct node
{
 int data;
 struct node *next;
}
*start=NULL;

class Link_list
{
 public:
 void insert(int ele)
 {
   if(start==NULL)
   {
    node *ptr=new  node();
    ptr->data=ele;
    ptr->next=NULL;
    start=ptr;
    cout<<"hey";
   }
  else
  {
   node *ptr=new node();
   ptr->data=ele;
   ptr->next=start;
   start=ptr;
   cout<<"hi";
  }
 };
 void del()
 {
  struct node *ptr;
  ptr=start;
  cout<<"Delete Element is\n"<<ptr->data;
  start=ptr->next;
  delete(ptr);
  
 
 }
 
 void disp()
 {
  struct node *temp;
  if(start==NULL)
  cout<<"Link List is empty\n";
  temp=start;
  while(temp!=NULL)
  { 
   cout<<temp->data<<" ";
   temp=temp->next;
  }
 }

};

int main()
{
 int data,ch;
 Link_list l;
 while(1)
 {
  cout<<"ENTER YOUR CHOICE\n";
  cout<<"1.INSERT\n";
  cout<<"2.DELETE \n";
  cout<<"3.DISPLAY\n";
  cin>>ch;
  switch(ch)
  { 
   case 1: cout<<"Enter the data \n";
   	   cin>>data;
	   l.insert(data);
	   break;
   case 2: l.del();
 	   break;
   case 3: l.disp();
  	   break;
   default:cout<<"Wrong Operator\n";
  }
 }
 return 0;
}

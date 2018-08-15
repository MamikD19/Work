#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
	int data;
	struct node *next;


	struct node *ptr;
}*start=NULL;
public:
void insert(int data)
{
	struct node *newnode,*temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->ptr=temp;
		end=newnode;
	}
}	
void display()
{
	

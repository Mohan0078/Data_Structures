#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Node
{
	int value;
	struct Node *next;
};

struct Node *head = NULL;

struct Node *createNode()
{
	struct Node *n;
	
	n = (struct Node *)malloc(sizeof(struct Node));
	
	return n;
}


void insert_At_First(int data)
{
	struct Node *temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp->value = data;
	temp->next = NULL;
	
	if(head==NULL)
	{
		// means if list is empty
		head = temp;
		return ;
	}
	
	// if head is not NULL means the linked list is already created
	// then we do ...
	//Logic behind the inserting at first
	
	temp->next = head;
	head = temp;
}

void delete_Node(int data)
{
	struct Node *temp=head,*prev=head,*NEXT;
	
	if(temp->value==data)
{

	head = temp->next;
	return ;
}
	while(temp!=NULL)
	{
		
		if(temp->value==data)
		{
			prev->next = temp->next;	
			break;
		}
		prev = temp;
		temp = temp->next;
	}
	
//	prev->next = NEXT;
	
	
}
void print()
{
	struct Node *temp = head;
	
	cout<<"The Linked List is \n";
	
	while(temp->next!=NULL)
	{
		cout<<temp->value<<" -> ";
		temp = temp->next;
	}
	
	cout<<temp->value;
}
int main()
{
	int data,n;
	
	cout<<"Enter number of elements ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"\nenter an element ";
        
        cin>>data;
        insert_At_First(data);
        print();
        
	}
	
	delete_Node(5);
	print();
	getch();
	
	return 0;
}

using namespace std;
#include<iostream>

//Node Indformation
struct node{
	int data;
	struct node *next;
};

//Global Declaration or making Head node
struct node *front = NULL;
struct node *rear = NULL;

//Insertion Function
int EnQueue(int data)
{
	struct node *newnode = (struct node *) new node();
	newnode -> data = data;
	newnode -> next = NULL;
	if(front == NULL && rear == NULL)
	{
		cout << "Insertion Done..........." << "\n";
		front = rear = newnode;
		return 0;		
	}
	cout << "Insertion Done...........";	
	cout << "\n";
	rear -> next = newnode;
	rear = newnode;
	return 0;
}

int DeQueue()
{
	struct node *temp = front;
	if(front == NULL)
	{
		return 0;
	}
	if(front == rear)
	{
		front = rear = NULL;
	}
	else
	{
		front = front -> next;
	}
	cout << "Deletion Done";
	cout << "\n";
}

void display()
{
	struct node *temp = front;
	cout << "Your Queue Linked List is : ";
	while(temp != NULL)
	{
		cout << temp -> data << " ";
		temp = temp -> next;
	}
}

// Main Function
int main()
{
	EnQueue(1);
	EnQueue(2);
	EnQueue(3);
	EnQueue(4);
	EnQueue(5);
	
	DeQueue();
	
	display();
}

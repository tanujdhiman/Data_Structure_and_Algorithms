using namespace std;
#include<iostream>

struct node{
	int data;
	struct node *next;
};

struct node *top = NULL;

void push(int data)
{
	struct node *newnode = (struct node *) new node();
	if(newnode == NULL)
	{
		cout << "Stack Overflow";
	}
	else
	{
		newnode -> data = data;
		newnode -> next = top;
		top = newnode;
	}
}


int stackBottom()
{
	struct node *temp = top;
	while(temp != NULL)
	{
		temp = temp -> next;
	}
	return temp -> data;
}


void display()
{
	struct node *temp = top;
	while(top != NULL)
	{
		cout << temp -> data << " ";
		temp = temp -> next;
	}
}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	
	cout << "Stack Bottom Element is : " << stackBottom();
	
	display();
	return 0;
}

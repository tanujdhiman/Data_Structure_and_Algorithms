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

int pop()
{
	if(top == NULL)
	{
		cout << "Stack Underflow";
	}
	else
	{
		struct node *n = top;
		int x = n -> data;
		top = top -> next;
		return x;
	}	
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
	
	cout << "Element Popped is : " << pop();
	cout << "\n";
	
	display();
	return 0;
}

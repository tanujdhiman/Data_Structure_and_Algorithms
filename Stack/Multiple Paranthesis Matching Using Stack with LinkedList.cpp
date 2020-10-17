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
		cout << "Stack is Full";
	}
	else
	{
		newnode -> data = data;
		newnode -> next = top;
		top = newnode;
	}
}

char pop()
{
	if(top == NULL)
	{
		cout << "Stack Underflow";
	}
	else
	{
		char x = top -> data;
		top = top -> next;
		return x;
	}
}

int isFull()
{
	struct node *n = (struct node *) new node();
	if(n == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

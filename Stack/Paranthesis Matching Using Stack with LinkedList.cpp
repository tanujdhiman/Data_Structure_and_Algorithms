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


void pop()
{
	if(top == NULL)
	{
		cout << "Stack Underflow";
	}
	else
	{
		top = top -> next;
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

int isEmpty()
{
	if(top == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void PMatch(char exp[])
{
	for (int i = 0; exp[i] != '\0'; i++)
	{
		if(exp[i] == '(')
		{
			push(exp[i]);
		}
		else if (exp[i] == ')')
		{
			if(isEmpty())
			{
				cout << "Stack is empty";
			}
			pop();
		}
	}
	if(isEmpty())
	{
		cout << "Balanced Expression";
	}
	else
	{
		cout << "Imbalanced Expression";
	}
}


int main()
{
	char C[100];
	cout << "Enter Expression : ";
	cin >> C;
	PMatch(C);	
	return 0;
}

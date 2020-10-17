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


int match(char a, char b)
{
	if(a == '{' && b == '}')
	{
		return 1;
	}
	if(a == '(' && b == ')')
	{
		return 1;
	}
	if(a == '[' && b == ']')
	{
		return 1;
	}
	return 0;
}

int pmatch(char exp[])
{
	char popped_ele;
	for(int i = 0; exp[i] != '\0'; i++)
	{
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
		{
			push(exp[i]);
		}
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if(isEmpty())
			{
				return 0;
			}
			popped_ele = pop();
			if(!match(popped_ele, exp[i]))
			{
				return 0;
			}
		}
	}
	if(isEmpty())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{
	char C[100];
	cout << "Enter Expression : ";
	cin >> C;
	if(pmatch(C))
	{
		cout << "Balanced Expression";
	}
	else
	{
		cout << "Imbalanced Expression";
	}	
	return 0;
}

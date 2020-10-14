using namespace std;
#include<iostream>

// Global Variables 
int top = -1, n = 100;
// Create a stack of Characters
char stack[100];

//Push Function 
void push(int x)
{
	// First Check the Stack has space or not if it is full then print an message of Stack Overflow
	if(top == n-1)
	{
		cout <<"Stack Overflow";
	}
	// If not then increment in top then insert element  there.
	else
	{
		top++;
		stack[top] = x;
	}
}

void pop()
{
	if(top == -1)
	{
		cout <<"Stack underflow";
	}
	else
	{
		top--;
	}
}


int isFull()
{
	if(top == n - 1)
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
	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void pmatch(char exp[])
{
	for(int i = 0; exp[i] != '\0'; i++)
	{
		if(exp[i] == '(')
		{
			push(exp[i]);
		}
		else if (exp[i] == ')')
		{
			if(!isEmpty())
			{
				pop();
			}
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
	char c[30];
	cout << "Enter Expression : ";
	cin >>	c;
	pmatch(c);
	return 0;
}

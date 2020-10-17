using namespace std;
#include<iostream>

int top = -1, n = 100;
char stack[100];

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

void push(int x)
{
	if(isFull())
	{
		cout <<"Stack Overflow";
	}
	else
	{
		top++;
		stack[top] = x;
	}
}

char pop()
{
	if(isEmpty())
	{
		cout <<"Stack underflow";
	}
	else
	{
		char val = stack[top];
		top--;
		return val;
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

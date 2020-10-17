using namespace std;
#include<iostream>
//Global Variables
int top = -1, n = 100;
char stack[100];

//Check whether the Stack is full or not
int isFull()
{
	//Compare it with the size of Stack
	if(top == n - 1)
	{
		return 1;
	}
	//if not return 0
	else
	{
		return 0;
	}
}

//Check whether the Stack is Empty or not
int isEmpty()
{
	//Compare the top element with the -1 which is the initial value of top
	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//Push Operation
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

int main()
{
	char c[30];
	cout << "Enter Expression : ";
	cin >>	c;
	if(pmatch(c))
	{
		cout << "Balanced Expression";
	}
	else
	{
		cout << "Imbalanced Expression";
	}
	return 0;
}

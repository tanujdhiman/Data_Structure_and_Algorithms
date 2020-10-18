using namespace std;
#include<iostream>

char infix[100], postfix[100];
int top = -1, n = 100;

int isFull()
{
	if(top == n-1)
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
		cout << "Stack is full or Overflow";
	}
	else
	{
		top++;
		stack_in[top] = x;
	}
}

using namespace std;
#include<iostream>

int top = -1, n = 100;
char stack[100];
void push(int x)
{
	if(top == n-1)
	{
		cout <<"Stack Overflow";
	}
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


int main()
{
	char c[30];
	cout << "Enter Expression : ";
	cin >>	c;
	pmatch(c);
	return 0;
}

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

int main()
{
	char c[30];
	cout << "Enter Expression : ";
	cin >>	c;
	pmatch(c);
	return 0;
}

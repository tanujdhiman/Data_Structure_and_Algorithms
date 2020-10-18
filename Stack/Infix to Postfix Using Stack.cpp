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

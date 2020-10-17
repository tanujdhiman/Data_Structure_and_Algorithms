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

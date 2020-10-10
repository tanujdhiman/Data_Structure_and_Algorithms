using namespace std;
#include<iostream>

int stack[100], top = -1, n = 100;

void push(int val)
{
	if(top > n-1)
	{
		cout << "Stack Overflow";
	}
	else
	{
		top++;
		stack[top] = val;
	}
}


void pop()
{
	if(top <= -1)
	{
		cout << "Stack Underflow";
	}
	else
	{
		cout << "Element Popped !! " << stack[top] << "\n";
		top--;
	}
}

void display()
{
	if(top >= 0)
	{
		for(int i = top; i >= 0; i--)
		{
			cout << stack[i] << " ";
		}
	}
	else
	{
		cout<<"Stack Empty";
	}
}

void peak(int index)
{
	if(top >= 0)
	{
		for(int i = 0; i <= top; i++)
		{
			if(i == index)
			{
				cout<< "Element at position " << index << " is " << stack[i] << "\n";
			}
		}
	}
}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	pop();
	
	cout << "Stack After Pop is : ";
	display();
	
	cout << "Finding the Element ";
	cout << "\n";
	peak(1);
	
	cout << "Stack is ";
	display();
	return 0;
}

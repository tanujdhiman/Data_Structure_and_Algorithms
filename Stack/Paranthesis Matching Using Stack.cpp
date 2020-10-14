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
	if(isFull())
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

//Pop Operation 
void pop()
{
	//First Check if our Stack has element or not it is empty then print an message of Stack underflow
	if(isEmpty())
	{
		cout <<"Stack underflow";
	}
	//if not then decrement top 
	else
	{
		top--;
	}
}

//This function Check if the Stack is Full or not
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

//This function Check if the Stack is Empty or not
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

//Function of Checking Expression is Balanced or not
void pmatch(char exp[])
{
	//Traverse through all the expression
	for(int i = 0; exp[i] != '\0'; i++)
	{
		//If we received an open brace then push it into the Stack
		if(exp[i] == '(')
		{
			push(exp[i]);
		}
		//If we received an close brace then pop from the Stack that means that the open brace in the Stack has its Close Brace.
		else if (exp[i] == ')')
		{
			//Before Popping Check it is Empty or not
			if(!isEmpty())
			{
				pop();
			}
		}
	}
	//When all the Stack is Empty it means all have their open-close brace 
	//So that Expression is Balanced
	if(isEmpty())
	{
		cout << "Balanced Expression";
	}
	// Otherwise It is Not Balanced
	else
	{
		cout << "Imbalanced Expression";
	}
}

//Main Function
int main()
{
	//create an array
	char c[30];
	//input the expression
	cout << "Enter Expression : ";
	cin >>	c;
	//Pass it to Function
	pmatch(c);
	return 0;
}

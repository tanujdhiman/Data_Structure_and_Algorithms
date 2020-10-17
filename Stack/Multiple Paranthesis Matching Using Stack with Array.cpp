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

/* The Difference between Paranthesis Matching and Multiple Paranthesis matching :
We have to check the top element of the stack because there are three types of paranthesis so that we have to check the pushed element 
if it is the opening brace of that paranthesis then pop it otherwise return 0.
*/
//This Function will return the top most element of the Stack
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

//Match Function :- It matches the popped element and the current exp element
int match(char a, char b)
{
	//In both the three cases return 1 otherwise return 0
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

//Paranthesis matching Program
int pmatch(char exp[])
{
	//create a char variable which store the popped element
	char popped_ele;
	for(int i = 0; exp[i] != '\0'; i++)
	{
		//check for opening brace
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
		{
			push(exp[i]);
		}
		//check for closing one
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			//if stack is empty
			if(isEmpty())
			{
				return 0;
			}
			//if not pop topmost element
			popped_ele = pop();
			//then check it is the matching brace or not 
			if(!match(popped_ele, exp[i]))
			{
				return 0;
			}
		}
	}
	//If you here then check if the stcak is empty or not 
	if(isEmpty())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//Main Function
int main()
{
	char c[30];
	cout << "Enter Expression : ";
	cin >>	c;
	//This function returns True or False
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

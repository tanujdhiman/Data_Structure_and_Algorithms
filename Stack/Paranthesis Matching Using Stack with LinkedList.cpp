using namespace std;
#include<iostream>
// Making Node of Linked List
struct node{
	int data;
	struct node *next;
};

//Top pointer of the Stack using Linked List
struct node *top = NULL;

// Push operation
void push(int data)
{
	// Make new node 
	struct node *newnode = (struct node *) new node();
	// Check it is allocated or not
	if(newnode == NULL)
	{
		cout << "Stack is Full";
	}
	//IF not then push it into Stack
	else
	{
		newnode -> data = data;
		newnode -> next = top;
		top = newnode;
	}
}

// Pop operation
void pop()
{
	//Check Stack has elements or not
	if(top == NULL)
	{
		cout << "Stack Underflow";
	}
	//If not then pop the top most element of stack
	else
	{
		top = top -> next;
	}
}

//This Function check if the Stack is Full or not
int isFull()
{
	//Make new node 
	struct node *n = (struct node *) new node();
	//check memory is allocated or not 
	if(n == NULL)
	{
		return 1;
	}
	//if not then return 0
	else
	{
		return 0;
	}
}

//The Function Checks if the Stack is Empty or not
int isEmpty()
{
	//Check top pointer is NULL or not 
	if(top == NULL)
	{
		return 1;
	}
	//if not then return 0
	else
	{
		return 0;
	}
}

//This function checks the paranthesis match or not
void PMatch(char exp[])
{
	// Traverse all through the character of arrays
	for (int i = 0; exp[i] != '\0'; i++)
	{
		//if open brace then push
		if(exp[i] == '(')
		{
			push(exp[i]);
		}
		//if close brace then pop the open brace
		else if (exp[i] == ')')
		{
			//first check it is empty or not
			if(isEmpty())
			{
				cout << "Stack is empty";
			}
			pop();
		}
	}
	//Then lastly we check our Stack it is empty or not
	if(isEmpty())
	{
		cout << "Balanced Expression";
	}
	else
	{
		cout << "Imbalanced Expression";
	}
}

//Main Function
int main()
{
	//Input and Pass
	char C[100];
	cout << "Enter Expression : ";
	cin >> C;
	PMatch(C);	
	return 0;
}

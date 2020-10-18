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

char pop()
{
	if(isEmpty())
	{
		cout << "Stack is empty or Underflow";
	}
	else
	{
		char ch = stack_in[top];
		top--;
		return ch;
	}
}

int prec(char op)
{
	if(op == '+' || op == '-')
	{
		return 1;
	}
	else if(op == '*' || op == '/')
	{
		return 2;
	}
	else if(op == '(' || op ==')')
	{
		return 3;
	}
	return 0;
}

int isoperator(char ope)
{
	if(ope == '+' || ope == '-' || ope == '*' || ope == '/')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void intopo(char exp[])
{
	int i = 0, j = 0;
	while(exp[i] != '\0')
	{
		if(!isoperator(exp[i]))
		{
			stack_post[j] = stack_in[i];
			i++;
			j++;
		}
		else
		{
			if(prec(exp[i]) > prec(top))
			{
				push(exp[i]);
				i++;
			}
			else
			{
				stack_post[j] = pop();
				j++;
			}
		}
	}
	while(!isEmpty())
	{
		stack_post[j] = pop();
		j++;
	}
}

int main()
{
	char C[50];
	cout << "Enter Your Expression : ";
	cin >> C;
	intopo(C);
	int i = 0;
	while(stack_post[i] != '\0')
	{
		cout << stack_post[i];
		i++;
	}
	return 0;
}

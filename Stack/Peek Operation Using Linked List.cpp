using namespace std;
#include<iostream>

struct node{
	int data;
	struct node *next;
};

struct node *top = NULL;

void push(int data)
{
	struct node *newnode = (struct node *) new node();
	if(newnode == NULL)
	{
		cout << "Stack Overflow";
	}
	else
	{
		newnode -> data = data;
		newnode -> next = top;
		top = newnode;
	}
}

int peek(int index)
{
	struct node *ptr = top;
	for(int i = 0; (i < index-1 && ptr != NULL); i++)
	{
		ptr = ptr -> next;
	}
	if(ptr != NULL)
	{
		return ptr -> data;
	}
	else
	{
		return -1;
	}
}

void display()
{
	struct node *temp = top;
	while(top != NULL)
	{
		cout << temp -> data << " ";
		temp = temp -> next;
	}
}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	
	cout << "Element found is : " << peek(3);
	cout << "\n";
	
	display();
	return 0;
}

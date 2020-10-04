using namespace std;
#include<iostream>

struct node{
	int data;
	struct node *next;
};

struct node *head, *tail = NULL;

void addNode(int data)
{
	struct node *newnode = (struct node *) new  node();
	newnode -> data = data;
	newnode -> next =  NULL;
	
	if(head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		tail -> next = newnode;
		tail = newnode;
	}
}

void del_at_pos(int pos)
{
	struct node *temp = NULL;
	temp = head;
	if(pos == 1)
	{
		head = head -> next;
	}
	
	for(int i = 1; i < pos - 1; i++) 
	{
		temp = temp -> next;
	}
	if(temp == NULL || temp -> next == NULL)
	{
		return;
	}
	
	struct node *temp1;
	temp1 = temp->next->next;
	temp -> next  = temp1;
}

void display()
{
	struct node *temp = head;
	while(head != NULL)
	{
		cout << temp -> data << " ";
		temp = temp -> next;
	}
}

int main()
{
	addNode(1);
	addNode(2);
	addNode(3);
	addNode(4);
	addNode(5);
	
	int pos;
	cin >> pos;
	del_at_pos(pos);
	display();
	return 0;
}

using namespace std;
#include<iostream>

struct node{
	int data;
	struct node *next;
	int front = -1;
	int rear = -1;
};

struct node *head = NULL;

void insert(int data)
{
	struct node *newnode = (struct node *) new node();
	
	if(newnode == NULL)
	{
		cout << "Queue is Empty";
	}
	else
	{
		if(newnode -> fornt == -1)
		{
			newnode -> fornt = 0;
		}
		cout << "Insertion Done...........";
		newnode -> rear = newnode -> rear + 1;
		newnode -> data =  data;
			
	}
}

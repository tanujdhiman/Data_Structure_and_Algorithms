using namespace std;
#include<iostream>

//Node Indformation
struct node{
	int data;
	struct node *next;
	int front = -1;
	int rear = -1;
};

//Global Declaration or making Head node
struct node *head = NULL;

//Insertion Function
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

// Main Function
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	
	return 0;
}

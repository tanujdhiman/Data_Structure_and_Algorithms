using namespace std;
#include<iostream>

//Node Indformation
struct node{
	int data;
	struct node *next;
};

//Global Declaration or making Head node
struct node *front = NULL;
struct node *rear = NULL;

//Insertion Function
int EnQueue(int data)
{
	struct node *newnode = (struct node *) new node();
	newnode -> data = data;
	newnode -> next = NULL;
	if(front == NULL && rear == NULL)
	{
		cout << "Insertion Done..........." << "\n";
		front = rear = newnode;
		return 0;		
	}
	cout << "Insertion Done...........";	
	cout << "\n";
	rear -> next = newnode;
	rear = newnode;
	return 0;
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

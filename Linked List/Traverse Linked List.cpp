using namespace std;
#include<iostream>

//Represent a node of singly linked list 
struct node{
	int data;
	node *next;
};

//Represent the head and tail of the singly linked list  
struct node *head, *tail = NULL;

//addNode() will add a new node to the list  
void addNode(int new_data)
{
	//Create a new node  
	struct node *new_node = (struct node *) new node();
	new_node -> data = new_data;
	new_node -> next = NULL;
	
	//Checks if the list is empty 
	if (head == NULL)
	{
		//If list is empty, both head and tail will point to new node 
		tail = new_node;
		head = new_node;
	}
	else
	{
		//newNode will be added after tail such that tail's next will point to newNode 
		tail -> next = new_node;
		//newNode will become new tail of the list 
		tail = new_node; 
	}
}

//display() will display all the nodes present in the list
// Traverse or Display is same thing because it is just going thorugh all the linked list  
void display()
{  
	if(head == NULL)
	{
		cout << "List is empty";
	}
	else
	{
		//Node current will point to head
		struct node *ptr = head;
		//Prints each node by incrementing pointer
		while(ptr != NULL)
		{
			cout << ptr -> data << " ";
			ptr = ptr -> next;
		}
	}
}

int main()
{
	//Add nodes to the list  
	addNode(1);
	addNode(2);
	addNode(3);
	addNode(4);
	addNode(5);

	
	//Displays Or Traverse the nodes present in the list  
	display();
	return 0;
}

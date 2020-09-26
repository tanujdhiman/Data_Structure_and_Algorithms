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

//Insertion at any position
void insert_at_pos(int data, int pos)
{
	//create a new node
	struct node *temp1 = (struct node *) new node();
	//insert data and make its address NULL for now.
	temp1 -> data = data;
	temp1 -> next = NULL;
	
	//Case : 1 
	//Insertion at first position is same as insert at beg.
	if(pos == 1)
	{
		temp1 -> next = head;
		head =  temp1;
		return; 
	}
	//other cases : 
	//make a new node and point it to head node.
	struct node *temp2 = head;
	//traverse to that position but not the exact position
	// but position - 1
	//As we know linked has no index it is just 1 node, 2 node......
	//so we will start "i" with 1 
	for(int i = 1; i < pos-1; i++)
	{
		temp2 = temp2 -> next;
	}
	
	//link element to the previous one.
	temp1 -> next = temp2 -> next;
	// break link of element
	temp2 -> next = temp1;
}


//display() will display all the nodes present in the list  
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
	
	cout <<"Before Insertion : ";
	display();
	cout << "\n";
	//Insert any data at end
	int data, pos;
	cout << "Enter the data you want to insert : ";
	cin >> data;
	cout << "Enter the appropriate Position :  ";
	cin >> pos;
	insert_at_pos(data, pos);
	
	//Displays the nodes present in the list
	cout <<"After Insertion : \n";  
	display();
	return 0;
}

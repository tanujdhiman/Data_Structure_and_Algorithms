using namespace std;  
#include <iostream>  

//Represent a node of singly linked list  
struct node{  
    int data;  
    struct node *next;  
};      
   
//Represent the head and tail of the singly linked list  
struct node *head, *tail = NULL;  
   
//addNode() will add a new node to the list  
void addNode(int data) {  
    //Create a new node  
    struct node *newNode = (struct node*)new node();  
    newNode->data = data;  
    newNode->next = NULL;  
      
    //Checks if the list is empty  
    if(head == NULL) {  
        //If list is empty, both head and tail will point to new node  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = newNode;  
        //newNode will become new tail of the list  
        tail = newNode;  
    }  
}  
   
void del_at_end()
{
	struct node *temp = head;
	while(temp != NULL)
	{
		temp = temp->next;
	}
	
	temp -> next = NULL;
	tail = temp;
}
   
//display() will display all the nodes present in the list  
void display() {  
    //Node current will point to head  
    struct node *current = head;  
      
    if(head == NULL) {  
        cout << "List is empty\n";  
        return;  
    }  
    cout << "Nodes of singly linked list:" << "\n";  
    while(current != NULL) {  
        //Prints each node by incrementing pointer  
        cout << current->data << " ";  
        current = current->next;  
    }  
    cout << "\n";  
}  
      
int main()  
{  
    //Add nodes to the list  
    addNode(1);  
    addNode(2);  
    addNode(3);  
    addNode(4);  
    
    del_at_end();
    //Displays the nodes present in the list  
    display();  
   
    return 0;  
}  

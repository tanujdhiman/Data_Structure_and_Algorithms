using namespace std;
#include<iostream>

//Globally Declare Queue, Front, Rear, Size of Queue
int queue[100], n = 100, front = -1, rear = -1;

//Insertion Opeartion
void insert(int data)
{
	if(rear == n - 1)
	{
		cout << "Queue is Full" << "\n";	
	}	
	else
	{
		if(front == -1)
		{
			front = 0;
		}
		rear++;
		queue[rear] = data;
		cout << "Insertion Done ..................." << "\n";
	}
}

//Deletion Opaertion
void del()
{
	if(front == -1)
	{
		cout << "Queue is Empty";
	}
	else
	{
		front++;
		cout << "Deletion Done ..................." << "\n";
	}
}

//Display Function
void display()
{
	cout << "Your Queue is : ";
	for(int i = front; i <= rear; i++)
	{
		cout << queue[i] << " ";
	}
}

//Main Function
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	
	del();
	
	display();
	return 0;
}

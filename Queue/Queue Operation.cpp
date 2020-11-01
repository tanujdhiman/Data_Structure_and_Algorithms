using namespace std;
#include<iostream>

int queue[100], n = 100, front = -1, rear = -1;

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

void display()
{
	cout << "Your Queue is : ";
	for(int i = front; i <= rear; i++)
	{
		cout << queue[i] << " ";
	}
}

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

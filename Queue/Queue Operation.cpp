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

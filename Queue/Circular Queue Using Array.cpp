using namespace std;
#include<iostream>

int queue[100], n = 100, front = 0, rear = 0;

void insert(int data)
{
	if(((rear+1) % n) == front)
	{
		cout << "Queue is Full" << "\n";	
	}	
	else
	{
		rear = (rear+1) % n;
		queue[rear] = data;
		cout << "Insertion Done ..................." << "\n";
	}
}


int main()
{
  return 0;
}

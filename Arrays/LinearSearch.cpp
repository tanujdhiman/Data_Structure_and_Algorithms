using namespace std;
#include<iostream>

//Creation Function
void creation(int arr[], int n)
{
	int i;
	cout << "Enter the Array Elements : " << "\n";
	for(i = 0; i < n; i++)
	{
		//Taking Input for each index
		cin >> arr[i];
	}
}

//Searching Element
void search(int arr[], int data, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(arr[i] == data)
		{
			cout << "Element Found at index position " << i; 
		}
	}
}


//Main function 
int main()
{
	//First Get the size of the array
	int n;
	cout << "Enter the Size of Array : " << "\n";
	cin >> n;
	
	//Function of creating an array
	int arr[n];
	creation(arr, n);
	
	//Linear Search
	int data;
	cout << "Enter the element you want to search in your input array: ";	
	cout << "\n";
	cin >> data;
	search(arr, data, n);

	return 0;
}

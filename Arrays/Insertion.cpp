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
//Insertion Function
void insert(int arr[], int pos, int data, int n)
{
	int i;
	//Make a space for the required element
	for(i = n; i > pos; i--)
	{
		arr[i] = arr[i-1];
	}
	//Drop that element in the vacant space.
	arr[pos] = data;
}

//Displaying Array
void display(int arr[], int n)
{
	int i;
	cout << "Your Array is : ";
	for(i = 0; i < n+1; i++)
	{
		//print every value of index
		cout << arr[i] << " ";
	}
	cout << "\n";
}

//Main function 
int main()
{
	//First Get the size of the array
	int arr[50];
	int n;
	cout << "Enter the Size of Array : " << "\n";
	cin >> n;
	
	//Function of creating an array
	creation(arr, n);
	
	cout << "Before Insertion : " << "\n";
	display(arr, n);
	
	//Function of Insert Element in the Array
	int data, pos;
	cout << "Enter the element you wanna insert in the array : " << "\n";
	cin >> data;
	cout << "Enter the position of to be inserted element : " << "\n";
	cin >> pos;
	
	insert(arr, pos, data, n);
	
	//Function of Displaying an array
	cout << "After Insertion : " << "\n";
	display(arr, n);
	return 0;
}

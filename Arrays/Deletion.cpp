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
//Deletion Function
void del(int arr[], int pos, int n)
{
	int i;
	//Go to the position
	for(i = 0; i < n; i++)
	{
		if(i >= pos)
		{
			arr[i] = arr[i+1];
		}
	}
}

//Displaying Array
void display(int arr[], int n)
{
	int i;
	cout << "Your Array is : ";
	for(i = 0; i < n-1; i++)
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
	
	//Function of Delete Element in the Array
	int pos;
	cout << "Enter the position of to be deleted element : " << "\n";
	cin >> pos;
	
	del(arr, pos, n);
	
	//Function of Displaying an array
	cout << "After Deletion : " << "\n";
	display(arr, n);
	return 0;
}

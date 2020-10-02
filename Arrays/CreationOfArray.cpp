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

//Displaying Array
void display(int arr[], int n)
{
	int i;
	cout << "Your Array is : ";
	for(i = 0; i < n; i++)
	{
		//print every value of index
		cout << arr[i] << " ";
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
	
	//Function of Displaying an array
	display(arr, n);
	return 0;
}

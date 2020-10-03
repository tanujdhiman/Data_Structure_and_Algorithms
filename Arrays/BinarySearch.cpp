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
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
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
	int num;
	cout << "Enter the element you want to search in your input array: ";	
	cout << "\n";
	cin >> num;
	int ret = binarySearch(arr, 0, n-1, num);
	if (ret == -1)
	{
		cout << "Element not found";
	}
	else
	{
		cout << "Element Found ----!----";
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;


int linearSearch(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}



int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		
		if (arr[mid] == x)
			return mid;

		
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		
		return binarySearch(arr, mid + 1, r, x);
	}

	
	return -1;
}


int main(void)
{
	
	
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 4;
	int n = sizeof(arr) 
	int result;
	
	int no;
	cout<<" PRESS 1 FOR LINEAR SEARCH \n PRESS 2 FOR BINARY SEARCH\n";
	cin>>no;

	if(no==1)
		result = linearSearch(arr, n, x);
	else
		result = binarySearch(arr, 0, n - 1, x);
	
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result;
	return 0;
}


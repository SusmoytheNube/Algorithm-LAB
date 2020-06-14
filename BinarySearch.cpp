#include <bits/stdc++.h> 
using namespace std; 
int binarySearch(int array[], int start, int end, int x) 
{ 
	if (end >= start) { 
		int mid = (start + end)/2;
		if (array[mid] == x) 
			return mid; 
		else if (array[mid] > x) 
			return binarySearch(array, start, mid - 1, x); 
		else
			return binarySearch(array, mid + 1, end, x); 
	} 
	return 0; 
} 
int main(void) 
{ 
	int array[] = { 2, 3, 4, 5, 10, 15, 40 }; 
	int x = 15; 
	int n = sizeof(array)/sizeof(array[0]); 
	int index = binarySearch(array, 0, n - 1, x); 
	if(index == 0) 
		cout << "Element is not in the array";
	else 
		cout << "Element found at position " << index+1<<endl; 

	 return 0; 
} 

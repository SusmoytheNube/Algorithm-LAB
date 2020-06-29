#include <bits/stdc++.h> 
using namespace std; 

void bubbleSort(int array[], int n) 
{ 
	int i, j, temp; 
	for (i = 0; i < n-1; i++)	 
        {
            for (j = 0; j < n-i-1; j++) {
                if (array[j] > array[j+1]) 
                    {  
                        swap(array[j],array[j+1]);
                    }
            }
        }
}

int main() 
{ 
	int i, array[] = {12, 11, 13, 5, 6}; 
	int n = sizeof(array)/sizeof(array[0]); 
	bubbleSort(array, n); 
	cout<<"Sorted array: "; 	 
	for (i = 0; i < n; i++) 
		cout << array[i] <<" ";
	return 0; 
} 

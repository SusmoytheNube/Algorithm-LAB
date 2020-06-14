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
                        temp= array[j];
                        array[j]= array[j+1];
                        array[j+1]= temp;
                    }
            }
        }
}

int main() 
{ 
	int i, array[] = {64, 34, 25, 12, 22, 11, 90}; 
	int n = sizeof(array)/sizeof(array[0]); 
	bubbleSort(array, n); 
	cout<<"Sorted array: "; 	 
	for (i = 0; i < n; i++) 
		cout << array[i] <<" ";
	return 0; 
} 

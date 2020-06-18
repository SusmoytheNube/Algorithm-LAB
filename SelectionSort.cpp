#include <bits/stdc++.h> 
using namespace std; 

void selectionsort(int array[], int n) 
{ 
	int i, j, k; 

	for (i= 0; i < n-1; i++) 
	{ 
		k= i; 
		for (j= i+1;j < n;j++)
        {
            if (array[j] < array[k]) 
			k = j; 
            swap(array[k],array[i]);
        }		
	} 
} 

int main() 
{ 
    int i; 
	int array[] = {64, 25, 12, 22, 11}; 
	int n = sizeof(array)/sizeof(array[0]);
    
	selectionsort(array, n); 

	for (i= 0;i < n;i++) 
		cout <<array[i] <<" "; 

	return 0; 
} 


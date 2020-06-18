#include <bits/stdc++.h> 
using namespace std; 

void insertionsort(int array[], int n) 
{ 
	int i, j, k; 
	for (i= 1;i < n;i++) 
	{ 
		k = array[i]; 
		j =i - 1; 
		while (array[j] > k) 
		{ 
			array[j + 1] = array[j]; 
			j= j - 1; 
		} 
		array[j + 1]= k; 
	} 
} 

int main() 
{   
    int i;
	int array[] ={ 12, 11, 13, 5, 6 }; 
	int n = sizeof(array)/sizeof(array[0]); 

	insertionsort(array, n); 

	for (i= 0;i < n;i++) 
		cout <<array[i] <<" ";  

	return 0; 
} 


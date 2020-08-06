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
	int N,i = 0,min ,max,sum = 0;

	cin>>N;
    cout<<endl;

    int A[N];
	while(i<N)
	{
		cin>> A[i];
		i++;
	}
	cout<<endl;

	bubbleSort(A, N); 
	
    for(i=0;i<N;i++)
        sum= sum + A[i];
		    
	max= sum - A[N-1];
	min= sum - A[0];
		   
	cout<< max <<" "<< min <<endl;	
	return 0;
    }
#include <bits/stdc++.h> 
using namespace std; 

void BubbleSort(int A[], int m) 
{ 
	int i, j; 
	for (i = 0; i < m-1; i++)	 
        {
            for (j = 0; j < m-i-1; j++) {
                if (A[j] > A[j+1]) 
                    {  
                        swap(A[j],A[j+1]);
                    }
            }
        }
}

int main() 
{ 
	int i=0,m;
    cin>>m;
    cout<<endl;

    int A[m];
	while(i<m)
	{
		cin>> A[i];
		i++;
	}
	cout<<endl;

	BubbleSort(A, m); 

	cout<<"Sorted Array: "; 	 
	for (i = 0; i < m; i++) 
		cout << A[i] <<" ";
        
	return 0; 
} 

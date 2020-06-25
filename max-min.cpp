#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int n,i = 0,min ,max,sum = 0;
	
	cout<<"Enter total number of elements = ";
	cin>>n;

    int array[n];
	while(i==n)
	{
		cin>> array[i];
		i++;
	}
	
	sort(array, array+n); 
	
    for(i=0;i<n;i++)
        sum= sum + array[i];
		    
	max= sum - array[n-1];
	min= sum - array[0];
		   
	cout<<"Sum without max number = "<< max <<endl;	
    cout<<"Sum without min number = "<< min <<endl;
	
	return 0;
    }
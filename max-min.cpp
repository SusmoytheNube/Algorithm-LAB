#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int n,i = 0,min ,max,sum = 0;
	
	cin>>n;
    cout<<endl;

    int array[n];
	while(i<n)
	{
		cin>> array[i];
		i++;
	}
	cout<<endl;
	sort(array, array+n); 
	
    for(i=0;i<n;i++)
        sum= sum + array[i];
		    
	max= sum - array[n-1];
	min= sum - array[0];
		   
	cout<< max <<" "<< min <<endl;	
   
	
	return 0;
    }
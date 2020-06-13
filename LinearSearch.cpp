#include <bits/stdc++.h> 
using namespace std; 
int linearsearch(int array[],int x) 
{ 
    int i; 
    for (i=0;array[i]!='\0';i++) 
        if (array[i] == x) 
            return i; 
    return 0; 
} 
int main() 
{ 
    int array[] ={1, 3, 4, 2, 7, 5, 9}; 
    int x ;
    cin >> x; 
    int index = linearsearch(array,x); 
    if (index == 0) 
        cout << "Element is not in the array"<<endl; 
    else
        cout << "Element found at position " << index+1<<endl; 
  
    return 0; 
} 
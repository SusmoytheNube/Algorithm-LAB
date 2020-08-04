#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[10000],b[10000],c[10000];

     cout<< "Enter Array size =";
     cin>> n;
     cout<<endl;

     int t,i, j=0,k=0,sum1=0,sum2=0;

     for (i=0;i<n;i++)
       { cin>> t;
        if (t % 2 == 0)
            {b[j] = t;
            j++;}
            
        else{
            c[k] = t;
            k++;}
       }

    for (int i = j - 1; i >= 0; i--) 
        cout<<b[i]<<accumulate(b,b+j,sum1);

    for (int i = k - 1; i >= 0; i--) 
        cout<<b[i]<<accumulate(c,c[k],sum2)<<endl;
    

    return 0;
}

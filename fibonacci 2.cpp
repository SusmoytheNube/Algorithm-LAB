#include<bits/stdc++.h>
using namespace std;
int Fibolist(int n){
    int F[n+1],i;
    F[0]=0;
    F[1]=1;
    for(i=2;i<=n;i++)
    {F[i] = F[i-1] + F[i-2];}
    return F[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<"F"<<n<<"="<<Fibolist(n);
    return 0;
}
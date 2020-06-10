#include<bits/stdc++.h>
using namespace std;
int Fibolist(int n){
    if(n<= 1)
    {return n;}
    return Fibolist(n-1) + Fibolist(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<"F"<<n<<"="<<Fibolist(n);
    return 0;
}
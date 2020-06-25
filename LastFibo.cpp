#include<bits/stdc++.h>
using namespace std;

int lastfibo(long long int n)
{
    int i , f[n];
    f[0]= 0;
    f[1]= 1;

    for(i=2;i<n;i++)
    {
         f[i] = (f[i-1]+f[i-2]) % 10;
    }

    return f[i];

}

int main() 
{
    long long int n;
    cin >> n;

    cout << "last digit of a fibonnaci is "<< lastfibo(n)<<'\n';

    return 0;
    }
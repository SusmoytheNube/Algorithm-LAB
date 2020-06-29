#include<bits/stdc++.h>
using namespace std;

int lastfibo(int n)
{
    int i , f[1000005];
    f[0]= 0;
    f[1]= 1;

    for(i=2;i<=n;i++)
    {
         f[i] = (f[i-1]+f[i-2]) % 10;
    }
    return f[n];
}

int main() 
{
    int n;
    cin >> n;

    cout << "last digit of a fibonnaci is "<< lastfibo(n);

    return 0;
    }
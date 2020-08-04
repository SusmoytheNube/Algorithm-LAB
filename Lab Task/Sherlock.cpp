#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k, p, a,i;
    cin>> t;
    while (t>0) 
    {
        cin >> n >> k >> p;

        for (i=0;i<k;i++) {
            cin>> a;
            if (a<=p) 
                p++;
        }
        if (p > n)
            cout << -1 << endl;
        else
            cout << p << endl;
        t--;
    }

    return 0;
}
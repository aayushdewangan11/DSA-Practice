#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    cin >> t;

    for (int cn = 1; cn <= t; cn++)
    {
        int n, k;
        cin >> n >> k;

        if (n <= k)
        {
            cout << k - n <<endl;
        }
        else
        {
            cout << ((n % 2) ^ (k % 2)) <<endl;
        }
    }

    return 0;
}
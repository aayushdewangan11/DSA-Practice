#include<bits/stdc++.h>
using namespace std;

int main(){

    long t;
    cin>>t;
    while(t--){
        long n, m, k;
        cin>>n>>m>>k;
        long x = (n /k);
        long a = (x < m) ? x : m;
        long b = ((m - a) + (k - 2)) / (k - 1);
        long res = a - b;
        cout<<res<<endl;
    }

    return 0;
}
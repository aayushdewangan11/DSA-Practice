#include<bits/stdc++.h>
using namespace std;

int main(){

    long t;
    cin>>t;
    while(t--){
        long long n, x, t;
        cin>>n>>x>>t;
        long long a = (t / x);
        a = (a < n) ? a : n;
        long long res = n * a - a * (a + 1) / 2;
        cout<<res<<endl;
    }

}
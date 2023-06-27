#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        n = (n > 6) ? n : 6;
        long long res = (n + 1) / 2 * 5;
        cout<<res<<endl;
    }
}
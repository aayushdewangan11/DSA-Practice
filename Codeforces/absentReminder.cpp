#include<bits/stdc++.h>
using namespace std;

int main(){

    long t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        vector<long> a(n); 
        for(long p = 0; p < n; p++){
            cin>>a[p];
        }
        sort(a.begin(), a.end());
        for(long p = 1; p <= n/2; p++){
            cout<<a[p]<<" "<<a[0]<<endl;
        }
    }

}
#include<bits/stdc++.h>
using namespace std;

int main(){

    long t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long res; scanf("%ld", &res);
        for(long p = 1; p < n; p++){
            long x;
            cin>>x;
            res &= x;
        }

        cout<<res<<endl;
    }

}
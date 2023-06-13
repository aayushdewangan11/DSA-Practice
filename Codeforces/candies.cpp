#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t; 
    cin>>t;
    while(t--){
        long long n; 
        cin>>n;
        long long m(1);
        for(long long p = 1; p < 50; p++){
            m = 2 * m + 1;
            if(n % m){
                continue;
            }
            cout<<n/m<<endl;
            break;
        }
    }
}
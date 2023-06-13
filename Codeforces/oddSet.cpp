#include<bits/stdc++.h>
using namespace std;
int main(){

    long t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long cnt(0);
        for(long p = 0; p < 2 * n; p++){
            long x;
            cin>>x;
            cnt += (x % 2);
        }

        puts(cnt == n ? "Yes" : "No");
    }

}
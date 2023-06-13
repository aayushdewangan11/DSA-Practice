#include<bits/stdc++.h>
using namespace std;

int main(){

    long t;
    cin>>t;
    while(t--){
        long n, k;
        cin>>n>>k;
        vector<long> dist(k);
        for(long p = 0; p < k; p++){
            long x;
            cin>>x;
            dist[p] = n - x;
        }

        sort(dist.begin(), dist.end());

        long cnt(0), rem(n);
        for(long p = 0; (rem > 0) && (p < dist.size()); p++){
            rem -= dist[p];
            cnt += (rem > 0);
        }

        cout<<cnt<<endl;

    }

}
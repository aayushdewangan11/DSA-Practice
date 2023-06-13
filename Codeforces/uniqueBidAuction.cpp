#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long>freq(n+1),idx(n+1);
        for(long long i=0; i<n; i++){
            cin>>a;
            freq[a]++;
            idx[a] = i+1;
        }
        long long index = -1;
        for(long long i=0; i<=n; i++){
            if(freq[i] == 1){
                index = idx[i];
                break;
            }
        }

        cout<<index<<endl;
    }

    return 0;
}
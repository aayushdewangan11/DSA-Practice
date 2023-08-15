#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        // for(int i =0; i<n; i++){
        //     cin>>a[i];
        // }
        // int count =0;
        // for(int i =0; i<n; i++){
        //     for(int j = i+1; j<n; j++){
        //         if(a[j] - a[i] == j - i){
        //             count++;
        //         }
        //     }
        // }
        // cout<<count<<endl;
        map<int,long long> mp;
        long long maxi = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            maxi += mp[x-i];
            mp[x-i]++;
        }
        cout<<maxi<<endl;

    }
}
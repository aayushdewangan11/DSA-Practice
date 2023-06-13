#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        int idx = n;
        n = 2 * n;
        vector<int>v;
        for(int i=0; i<n; i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());

        int ans = 0;
        ans = abs(v[idx-1]- v[idx]);

        cout<<ans<<endl;
    }
}
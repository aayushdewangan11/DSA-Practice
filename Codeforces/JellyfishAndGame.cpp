#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        int jrr[n];
        for(int i =0; i<n; i++){
            cin>>jrr[i];
        }
        int grr[m];
        for(int i =0; i<m; i++){
            cin>>grr[i];
        }

        sort(jrr, jrr +n);
        sort(grr, grr +m);

        int ans = accumulate(jrr, jrr +n, 0);
        if(k% 2 == 0) cout<<ans<<endl;
        else {
            swap(jrr[0], grr[m-1]);
            cout<<accumulate(jrr, jrr +n,)<<endl;
        }


    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        vector<int> jrr(n);
        for(int i =0; i<n; i++){
            cin>>jrr[i];
        }
        vector<int> grr(m);
        for(int i =0; i<m; i++){
            cin>>grr[i];
        }

        sort(jrr.begin(), jrr.end());
        sort(grr.begin(), grr.end(), greater<int>());

        int round = 0;
        int j_index = 0;
        int g_index = 0;

        while (round < k && j_index < n && g_index < m) {
            if (jrr[j_index] < grr[g_index]) {
                swap(jrr[j_index], grr[g_index]);
                j_index++;
                g_index++;
            } else {
                break;
            }
            round++;
        }

        int ans = accumulate(jrr.begin(), jrr.end(), 0);
        cout << ans << endl;
    }
    return 0;
}
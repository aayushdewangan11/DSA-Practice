#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        long long cnt = 0, ans;
        for(int i= 0;i<k - 1; i++){
            if (s[i] == 'W')cnt++;
        }
        ans = cnt;
        for(int i= 0; i<k - 1; i++){
            if (s[i] == 'W')cnt++;
            if (s[i - k] == 'W')cnt--;
            ans = min(ans, cnt);
        }
        cout<<ans<<endl;
    }
}
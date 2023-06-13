#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    //     int n;
    //     cin>>n;
    //     bool ans = false;
    //     for(int i = 0; i<n; i++){
    //         if(pow(2,i)==n){
    //             ans = true;
    //             break;
    //         }
    //     }
    //     if(ans == true){
    //         cout<<"YES\n";
    //     }else {
    //         cout<<"NO\n";
    //     }
    // }
        int n;
        cin>>n;
        bool ans = false;
        if (n > 0 && (n & (n-1)) == 0) {
            ans = true;
        }
        if(ans == true){
            cout<<"YES\n";
        }else {
            cout<<"NO\n";
        }
    }
}
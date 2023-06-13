#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s = "codefrs";
    while(t--){
        char a;
        cin>>a;
        bool flag = false;
        for(auto i: s){
        if(a == i){
            flag = true;
            break;
        }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    }
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int n = s.length();
    for (int i = 0; i < n / 2; i++){
        swap(s[i], s[n - i - 1]);
    }
    if(s == t){
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
}
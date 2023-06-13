#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int len = s.length();
        if(len>10){
         cout<<s[0]<<len - 2<<s[s.length() - 1]<<endl;
        }else{
            cout<<s<<endl;
        }
    }    
}
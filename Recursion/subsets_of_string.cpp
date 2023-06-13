#include<bits/stdc++.h>
using namespace std;

string subset(string s, string current, int n){
    if(n == s.length()){
        cout<<current<<" ";
        return current;
    }
    subset(s, current, n+1);
    subset(s, current + s[n], n+1);
    
}

int main(){
    string s;
    getline(cin,s);
    string current = "";
    int n = 0;
    cout<<subset(s, current, n)<<endl;
    cout<<subset(s, current, n).length();
}
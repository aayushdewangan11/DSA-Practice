#include<bits/stdc++.h>
using namespace std;

int leftMost(string s){
    for(int i =0; i<s.length(); i++){
        for(int j = i+1; j<s.length(); j++){
            if(s[i]==s[j]){
                return i;
            }
        }
    }
}

int main(){
    string s;
    getline(cin, s);
    cout<<leftMost(s);

}
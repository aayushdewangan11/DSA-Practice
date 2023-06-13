#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    bool ans = true;
    for(int i = 0; i<s.length(); i++){
        if(s[i]!= s[s.length() -i -1]){
            ans = false;
        }
    }
    if(ans == false){
        return false;
    }else {
        return true;
    }
}

int main(){
    string s;
    getline(cin, s);

    cout<<palindrome(s);
}
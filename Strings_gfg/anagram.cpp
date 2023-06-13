#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2){
    bool ans = true;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1.length()!=s2.length()){
        return false;
    }
    for(int i = 0; i<s1.length(); i++){
        if(s1==s2){
            ans = true;
        }
    }
    if(ans == true){
        return true;
    }else {
        return false;
    }
}

int main(){
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);

    cout<<anagram(s1,s2);
}
#include<bits/stdc++.h>
using namespace std;

int leftMost(string s){
    
    for(int i = 0; i<s.length(); i++){
        bool ans = false;
        for(int j =0; j<s.length(); j++){
            if(i!=j && s[i]==s[j]){
                ans = true;
                break;
            }
        }
        if(ans == false){
            return i;
        }
        
    }
    return -1;
}

int main(){
    string s;
    getline(cin,s);
    cout<<leftMost(s);

}
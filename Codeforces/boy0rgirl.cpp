#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count = 0;

    for(int i = 0; i<s.size(); i++){
        count++;
        for(int j = i; j<s.size();j++){
            if(s[i]==s[j+1]){
                count--;
                break;
            }
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else {
        cout<<"IGNORE HIM!"<<endl;
    }
}
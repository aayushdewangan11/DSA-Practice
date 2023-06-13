#include<bits/stdc++.h>
using namespace std;

void patternSearch(string s1, string s2){
    int n = s1.size();
    int m = s2.size();
    for (int i = 0; i<n; i++){
        if (s1.substr(i,m) == s2){
            cout<<i<<endl;
        }
    }
}

int main(){
    string txt,ptn;
    cin>>txt>>ptn;
    patternSearch(txt,ptn);
}
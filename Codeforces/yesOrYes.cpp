#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        if(s == "YES"){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
}
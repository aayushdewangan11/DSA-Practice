#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int a, b, c;
    int count=0;
    while(t--){
        cin>>a>>b>>c;
        
        if(a==1&& b == 1 && c==1){
            count++;
        }else if(a==1 && b == 1 && c==0){
            count++;
        }else if(a==0 && b == 1 && c==1){
            count++;
        }else if(a==1 && b == 0 && c==1){
            count++;
        }      

    }
    cout<<count;

    return 0;
}
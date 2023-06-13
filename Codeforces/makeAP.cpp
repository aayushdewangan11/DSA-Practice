#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b,c;
        cin>>a>>b>>c;

        int n= -1;
        if((2*b-c)%a == 0 && (2*b-c)>0){
            n = (2*b-c)/a;
        }else if((a+c)%(2*b)==0){
            n=(a+c)/(2*b);  
        }
        else if((2*b-a)%c==0 && (2*b-a)>0){
            n=(2*b-a)/c;
        }
        if(n==-1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
}
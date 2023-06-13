#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x,y;
    while(t--){
        cin>>x>>y;
        if(x<y){
            cout<<"REPAIR"<<endl;
        }else if(x>y){
            cout<<"NEW PHONE"<<endl;
        }else {
            cout<<"ANY"<<endl;
        }
    }
}
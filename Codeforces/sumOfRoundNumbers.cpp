#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    while(n--){
        cin>>t;
        if(n<10){
            cout<<1<<endl<<n;
            break;
        }
        if(n%10 == 0){
            cout<<1<<endl<<n;
            break;
        }
        int count =0;
        int ans;
        for(int i = 0; n>0; i++){
            if(n%10!=0){
                count++;
            }
            n=n/10;
        }
        while(count>0){
            cout<<count<<endl;
        }
    }
}
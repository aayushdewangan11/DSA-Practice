#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    long long n, k;
    while(t--){
        cin>>n>>k;
        if(n%2== k%2){
            if(k*k >n){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
        }
    }

}
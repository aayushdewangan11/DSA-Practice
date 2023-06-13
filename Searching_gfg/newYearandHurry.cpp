#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int t = 240-m;
    int count = 0;
    for (int i = 1; t>=i*5; i++){
        t = t - i*5;
        count++;
    }
    if(count>n){
        cout<<n;
    }else{
        cout<<count;
    }
}
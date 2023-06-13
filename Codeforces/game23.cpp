#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int count=0;
    if(n == m){
        cout<<0<<endl;
    }
    else if(m % n != 0){
        cout<<-1<<endl;
    }
    else{
        int d = m/n;
        while(d % 2 == 0){
            d /= 2;
            count++;
        }
        while(d % 3 == 0){
            d /= 3;
            count++;
        }
        if(d != 1)count = -1;
        cout<<count<<endl;
    }
}
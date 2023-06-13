#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b,x,y,n;
    while(t--){
        cin>>a>>b>>x>>y>>n;
        int p = min(n,a-x);
        n= n-p;
        a = a-p;
        p = min(n,b-y);
        b = b-p;

        cout<<min((a*b), (b*a))<<endl;
    }
}
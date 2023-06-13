#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int eights=ceil((double)n/4);
        for (int i = 0; i < (n-eights); i++)
        {
            cout<<9;
        }
        for (int i = 0; i < eights; i++)
        {
            cout<<8;
        }
        cout<<endl;
    }
}
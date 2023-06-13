#include<bits/stdc++.h>
using namespace std;

void intersection(int a[], int n, int b[], int m){
    for(int i = 0; i<n; i++){
        if(i>0 && a[i]==a[i-1]){
            continue;
        }

        for(int j = 0; j<m;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i = 0; i<m; i++){
        cin>>b[i];
    }
    intersection(a, n, b, m);
}
#include<bits/stdc++.h>
using namespace std;

int inversion(int a[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            if(a[i] >a[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    cout<<inversion(a,n);
}
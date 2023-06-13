#include<bits/stdc++.h>
using namespace std;

void unionOfArrays(int a[], int n, int b[], int m){
    int arr[n+m];
    for(int i = 0; i<n; i++){
        arr[i] = a[i];
    }
    for(int i = 0 ; i<m; i++){
        arr[n+i] = b[i];
    }

    sort(arr, arr+m+n);

    for(int i = 0; i<m+n; i++){
        if(i==0 && arr[i]!= arr[i-1]){
            cout<<arr[i]<<" ";
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
    unionOfArrays(a, n, b, m);
}
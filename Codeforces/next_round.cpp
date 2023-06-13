#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int count = 0;
    int a;
    int arr[10001];
    for(int i = 1; i<=n; i++){
        cin>>a;
        arr[i]= a;
    }
    for(int j = 1; j<=n; j++){
        if(arr[j]>= arr[k] && arr[j]>0){
            count++;
        }
    }
    cout<<count;
}
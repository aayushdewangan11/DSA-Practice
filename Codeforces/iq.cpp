#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    if(count==1){
        for(int i = 0; i<n; i++){
            if(arr[i]%2== 0){
                cout<<i+1;
            }
        }
    }else {
        for(int i = 0; i<n; i++){
            if(arr[i]%2!= 0){
                cout<<i+1;
            }
        }
    }
}
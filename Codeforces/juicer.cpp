#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b,d;
    cin>>n>>b>>d;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int size = 0;
    int count =0;
    for(int i =0; i<n; i++){
        if(size> d){
            size =0;
            count++;
        }
        if(arr[i]> b) continue;
        else {
            size = size + arr[i];
        }
    }
    if(size> d){
        count++;
    }
    cout<<count;
}
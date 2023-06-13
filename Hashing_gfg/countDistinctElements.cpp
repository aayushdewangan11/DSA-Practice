#include<bits/stdc++.h>
using namespace std;

int distinctElements(int arr[], int n){
    int count = 0;
    sort(arr, arr+n);
    for(int i = 0; i<n; i++){
        if(arr[i]== arr[i+1]){
            count++;
        }
    }
    return n-count;
}

int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<distinctElements(arr,n);
}
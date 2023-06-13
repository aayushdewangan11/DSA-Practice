#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){
    for(int i = 0; i<n; i++){
        bool value = true;
        for(int j =0; j<n;j++){
            
            if(arr[i]>arr[j]){
                value = true;
                break;
            }
            else {
                value = false;
            }
        }
        if(value == true){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<largestElement(arr,n);
    
}
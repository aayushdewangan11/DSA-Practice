#include<bits/stdc++.h>
using namespace std;

void peakElement(int arr[], int n){
    if (arr[0]>arr[1]){
        cout<< arr[0]<<endl;
        }
        if (arr[n-1]>arr[n-2]){
            cout<< arr[n-1]<<endl;
        }    
        
    for (int i = 1; i<n;i++){
        if(arr[i-1]< arr[i]&& arr[i+1]< arr[i]){
            cout<< arr[i]<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i =0; i<n; i++){
        cin>>arr[i];
    }
    peakElement(arr,n);

}
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int x, int low, int high, int n){
    //int size =  sizeof(arr) / sizeof(arr[0]);
    // low = 0;
    // high = size - 1;
    int mid;
    if (low<= high){
        mid = (low + high)/2;
    }

    if(x < arr[mid]){
        return binarySearch(arr, x, low, mid -1,n);
    }else if(x>arr[mid]){
        return binarySearch(arr, x, mid+1, high,n);
    }else {
        if(mid== n-1 || arr[mid+1]!= arr[mid]){
            return mid;
        }else{
            return binarySearch(arr,x,mid+1,high,n);
        }
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int size =  sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size - 1;

    int x;
    cin>>x;
    cout<<binarySearch(arr,x, low, high,size);
}

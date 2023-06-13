#include<bits/stdc++.h>
using namespace std;

int deletElement(int arr[], int n, int k){
    int i;
    for(int i = 0; i<n; i++){
        if(arr[i]==k){
            break;
        }
    }
    if(i == n){
        return n;
    }
    for(int j = i; j<n-1 ; j++){
        arr[j]= arr[j+1];
    }
    return n-1;

}
int main(){
    int arr[] = {1,2,3,4,5};
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    cout<<"\nEnter the element to delete : ";
    int k;
    cin>>k;
    cout<<"\nArray before deletion : ";
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    n = deletElement(arr, n,k);
    cout<<"\nArray after deletion : ";
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }


}

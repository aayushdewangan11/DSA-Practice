#include<bits/stdc++.h>
using namespace std;

int countEven(int arr[], int n){
    int count =0;
    for(int i =0; i<n; i++){
        if(arr[i] %2 == 0){
            count++;
        }
    }
    return count;
}

int countOdd(int arr[], int n){
    int count =0;
    for(int i =0; i<n; i++){
        if(arr[i] %2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++) cin>>arr[i];
    int even = countEven(arr, n);
    int odd = countOdd(arr, n);

    if(even > odd){
        for(int i =0; i<n; i++){
            if(arr[i] %2 != 0){
                cout<<i +1;
                break;
            }
        }
    }else {
        for(int i =0; i<n; i++){
            if(arr[i] %2 == 0){
                cout<<i +1;
                break;
            }
        }
    }

}

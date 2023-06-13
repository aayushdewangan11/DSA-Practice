#include<bits/stdc++.h>
using namespace std;

int linearSearch (int arr[], int x){
    int size = *(&arr + 1) - arr;
    for (int i = 0; i<size; i++){
        if (arr[i] == x){
            return i;
            break;
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
    int x;
    cin>>x;

    cout<<linearSearch(arr, x);
}


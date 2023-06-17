#include<bits/stdc++.h>
using namespace std;

int distinctElements(int arr[], int n){
    set<int>s;
    for(int i =0; i<n; i++){
        s.insert(arr[i]);
    }

    // int count =0;
    // for(auto a : s){
    //     count++;
    // }
    // return count;
    return s.size();
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
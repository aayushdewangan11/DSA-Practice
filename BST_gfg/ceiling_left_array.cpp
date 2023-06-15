#include<bits/stdc++.h>
using namespace std;

void ceiling(int arr[], int n){
    cout<<-1<<" ";

    for(int i =1; i<n; i++){
        int diff = INT_MAX;
        for(int j =0; j<i; j++){
            if(arr[j]> arr[i]){
                diff = min(diff, arr[j]- arr[i]);
            }
        }
        if(diff == INT_MAX) cout<<-1<<" ";
        else cout<<arr[i] + diff<<" ";
    }
}; 

int main(){
    int arr[6] = {2,8,30,15,25,12};
    ceiling(arr, 6);
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    int arr[k];
    for (int i = 0; i<k; i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;

    int count = 0;
    int diff;
    sort(arr, arr +k);
    for (int i = k-1; i>=0; i--){
        if(sum>=arr[i]){
            count = count + sum/arr[i];
            sum = sum - (sum/arr[i])*arr[i];
        }
    }
    cout<<count;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int h,m;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>h>>m;
        int time = h + m;
        cin>>arr[time];
    }
    int same = 0;
    sort(arr, arr+n);
    for (int i = 1; i<=n; i++){
        if(arr[i]==arr[i-1]){
            same++;
        }
    }
    if(same == 0){
        cout<<1;
    }else {
        cout<<same;
    }
}
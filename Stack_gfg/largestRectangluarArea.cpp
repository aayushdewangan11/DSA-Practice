#include<bits/stdc++.h>
using namespace std;

int largestArea(int arr[], int n){
    int res =0;
    stack<int> s;

    for(int i =0; i<n; i++){
        while(!s.empty() && arr[s.top()]>= arr[i]){
            int tp = s.top();
            s.pop();
            int curr = arr[tp]*(s.empty() ? i : i - s.top() -1);
            res = max(res, curr);
        }
        s.push(i);
    }
    while(!s.empty()){
        int tp = s.top();
        s.pop();
        int curr = arr[tp]*(s.empty() ? n : n- s.top() -1);
        res = max(res, curr);
    }
    return res;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<largestArea(arr, n);

}
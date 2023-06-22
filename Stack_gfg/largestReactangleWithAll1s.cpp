#include<bits/stdc++.h>
using namespace std;

int largestArea(int arr[]){
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

int largestRectangle( int a[]c[])

int main(){
    int A[][C] = {
        { 0, 1, 1, 0 },
        { 1, 1, 1, 1 },
        { 1, 1, 1, 1 },
        { 1, 1, 0, 0 },
    };
    cout<<largestRectangle(A);

}
#include<bits/stdc++.h>
using namespace std;

int maximumItem(int arr[], int n, int sum){
    // int ans =0;
    // sort(arr, arr+n);
    // for(int i = 0; i<n; i++){
    //     if(arr[i]<=sum){
    //         sum = sum - arr[i];
    //         ans++;
    //     }else {
    //         break;
    //     }
    // }
    // return ans;

    priority_queue<int, vector<int>, greater<int>> pq(arr, arr+n);
    int res=0;
    // for(int i=0;i<n;i++)
    //     pq.push(arr[i]);
    
    for(int i=0;i<n;i++){
        if(pq.top()<=sum){
            sum-=pq.top();
            pq.pop();
            res++;
        }else{
            break;
        }
    }
    return res;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;

    cout<<maximumItem(arr, n, sum);
}
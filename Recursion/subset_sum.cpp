#include<bits/stdc++.h>
using namespace std;

/*int subset(int arr[], int sum){
    int n;
    int arr[n];
    int s = 0;
    int count = 0;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
        int s = s + arr[i];
        if(s == sum){
            count++;
        }
        break;

    }
    return count;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    cout<<subset(arr, sum);

}*/

int subset(int arr[], int n, int sum){
    if(n==0){
        return (sum==0)? 1: 0;
    }
    return subset(arr, n-1, sum ) + subset(arr, n-1, sum - arr[n-1]);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1; i<=n; i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;

    cout<<subset(arr, n, sum);

    return 0;
}
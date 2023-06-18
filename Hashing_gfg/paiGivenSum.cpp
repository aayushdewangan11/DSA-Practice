#include <bits/stdc++.h>
using namespace std;


int pairWithSumX(int arr[],int n, int X)
{
    // unordered_set<int> s;
    // for(int i =0; i<n; i++){ 
    //     if(s.find(X - arr[i]) != s.end()){
    //         return 1;
    //     }
    //     else{
    //         s.insert(arr[i]);
    //     }
    // }
    // return -1;

    sort(arr, arr+n);
    int i = 0;
    int j = n-1;
    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum == X) return 1;
        else if(sum< X) i++;
        else j--;
    }
    return -1;

    
}

int main()
{
    int arr[] = {3, 8, 4, 7, 6, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int X = 14;
    
    cout << pairWithSumX(arr, n, X);
    return 0;
}
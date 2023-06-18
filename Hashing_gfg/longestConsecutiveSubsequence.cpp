#include <bits/stdc++.h>
using namespace std;

int findLongest(int arr[], int n){
    // sort(arr, arr+n);
    // int ans = 1;
    // int maxi =1;
    // for(int i =1; i<n; i++){
    //     if(arr[i] - arr[i -1] == 1){
    //         ans++;
    //     }
    //     else{
    //         maxi = max(maxi, ans);
    //         ans = 1;
    //     }
    // }
    // return max(maxi, ans);

    unordered_set<int> s(arr, arr+n);
    int res = 0; 
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i] - 1) == s.end()) {
            int curr = 1;
            while (s.find(curr+arr[i]) != s.end())
                curr++;
                
            res = max(res, curr);
        }
    }
    return res;

}

int main()
{
    int arr[] = {1, 9, 3, 4, 2, 10, 13};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << findLongest(arr, n);
}
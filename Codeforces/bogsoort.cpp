#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    while(n--){
        cin>>t;
        vector<int> arr;
        for(int i = 0; i<t; i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.rbegin(), arr.rend());
        for(int i = 0; i<t; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
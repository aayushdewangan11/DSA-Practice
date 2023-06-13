#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr[m];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int a;
            cin>>a;
            arr[i].push_back(a);
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}
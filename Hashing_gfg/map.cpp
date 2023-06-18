#include<bits/stdc++.h>
using namespace std;

int  main(){
    int arr[9] = {1,2,3,4,5,5,4,3,1};
    map<int, int> mp;
    for (int i =0; i<9; i++){
        mp[arr[i]]++;
    }

    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
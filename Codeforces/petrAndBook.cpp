#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for (int i =0; i<7; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans = v[0];
    int i(0);
    while(ans<n){
        i++;
        i = i % 7;
        ans = ans + v[i];
    }
    cout<<i+1;

}
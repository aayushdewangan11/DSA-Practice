#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        int arr[t];
        for (int i = 0; i<t; i++){
            cin>>arr[i];
        }
        vector<int> ans;
        //bool a = true;
        for (int i = 0; i<t; i++){
            for (int j = i+1; j<t; j++){
                if (arr[i]>arr[j]){
                    ans.push_back(arr[i]);
                    break;
                }
            }
            
        }
        cout<<ans.size()<<endl;
        
    }
}
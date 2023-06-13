#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        int flag = 0;
        cin>>n;
        long long arr[100001];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);

        for(int i=n-1; i>=0; i--){
            if(arr[i] <= i+1){
                cout<<i+2<<endl;
                flag = 1;
                break;
            }
            else{
                continue;
            }
        }
        if(flag == 0){
            cout<<1<<endl;
        }
    }
    return 0;

}
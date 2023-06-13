#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int a;
    cin>>a;
    for(int i = 0 ; i<n;i++){
        if(arr[i]==a){
            cout<<i;
        }else {
            cout<<-1;
        }
    }
    return 0;
}
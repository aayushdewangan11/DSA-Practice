#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n;
    int arr[n];
    int count = 0;
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for (int i = 1; i<=n ; i++){
        for(int j = 1; j<=n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count %2 != 0){
                cout<<count;
            }
        }
    }
}
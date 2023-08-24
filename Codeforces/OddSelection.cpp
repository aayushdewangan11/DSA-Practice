#include<bits/stdc++.h>
using namespace std;

// int Even(int arr[], int n){
//     int count =0;
//     for(int i =0; i<n; i++){
//         if(arr[i]%2 == 0){
//             count++;
//         }s
//     }
//     return count;
// }

// int Odd(int arr[], int n){
//     int count =0;
//     for(int i =0; i<n; i++){
//         if(arr[i]%2 != 0){
//             count++;
//         }
//     }
//     return count;
// }

int main(){
    int t,n,x,a;
    cin>>t;
    while(t--)
    {
        int even = 0,odd = 0;
        cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a % 2 == 1)odd++;
            else even++;
        }
        int m = min(even,x-1);
        int d = x - m;

        if(d % 2 == 0){
            d++;
        }
        if(odd >= d && d <= x)cout<<"Yes\n";
        else cout<<"No\n";

    }
}



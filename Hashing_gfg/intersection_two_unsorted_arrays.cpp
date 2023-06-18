#include<bits/stdc++.h>
using namespace std;

void intersection(int a[], int m , int b[], int n){
    // for(int i =0; i<m ;i++){
    //     for(int j =0; j<n; j++){
    //         if(a[i] == b[j]){
    //             cout<<a[i]<<" ";
    //         }
    //     }
    // }

    map<int, int> m1, m2;
    for(int i =0; i<m; i++){
        m1[a[i]]++;
    }
    for(int j =0; j<n; j++){
        m2[b[j]]++;
    }

         

}

int main(){
    int a[] = {10,20,30};
    int b[] = {30,20,10};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    intersection(a, m, b, n);
    
    return 0;
}
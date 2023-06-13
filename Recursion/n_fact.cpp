#include<bits/stdc++.h>
using namespace std;

/*int fact(int n){
    if(n ==0 || n==1){
        return 1;
    } else {
        return n*fact(n-1);
    }
    
}*/

int fact(int n , int k){
    if (n ==0 || n==1){
        return k;
    } else {
        return fact(n-1, k*n);
    }
}

int main(){
    int n,k;
    cout<<"Enter a number : ";
    cin>>n>>k;
    cout<<fact(n, k);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    /*int sum = 0;
    for (int i = 1; i<= n; i++){
        sum = sum+i;
    }
    return sum;*/
    if(n<=1){
        return n;
    }
    return n+ sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}

#include<iostream>
#include<cmath>

using namespace std;

int divisors(int n){

    for(int i = 1; i< n; ++i){
        if (n%i==0){
            cout<<i<<" ";
        }
        
    }
}

int main(){
    int n;
    cin>>n;
    int a;
    while(n--){
        cin>>a;
        cout<<divisors(a);
    }
    
}
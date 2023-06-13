#include<iostream>
#include<cmath>
using namespace std;

int prod_of_digit(int n){
    int prod = 1;

    for(int i = 0; n>0; i++){
        prod = prod*(n%10);
        n = n/10;
    }

    return prod;
}

int main(){
    int n;
    cin>>n;
    cout<<prod_of_digit(n);
}
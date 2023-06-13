#include<iostream>
#include<cmath>

using namespace std;

int divisor(int n){

    for(int i = 1; i*i<=n ; i++){
        if (n%i == 0){
            cout<<i<<" ";
            
        }

    }

}
#include<iostream>
#include<cmath>

using namespace std;

string isprime(int a){
    if (a<=1){
        return "NO PRIME";
    }
    
    for (int i = 2; i<= a; i++){
        if(a%i==0){
            return "NO PRIME";
        }
        else{
            return "PRIME";
        }
    }
}


int main(){
    int T;
    cin>>T;

    int a;

    for(int i = 0; i <T; i++){
        cin>>a;
    }
    cout<<isprime(a);
    //cout<<prime_fact(a);
}
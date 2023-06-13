#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int a){
    if (a<=1){
        return false;
    }
    else if (a=2){
        return true;
    }
    
    for (int i = 2; i<=a; i++){
        if(a%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}

void prime_nos(int n){
    if (n<=1){
        cout<<"NOT PRIME";
    }
    for (int i =2; i<=n; i++){
        if(isprime(i)==true){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    prime_nos(n);
}


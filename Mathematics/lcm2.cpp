#include<iostream>
#include<cmath>
using namespace std;

int gcd(int a, int b){
    while(a!=b){
        if (a>b)
            a=  a-b;
        else
            b =  b-a;
    }
    return a;  
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a,b;

    cin>>a>>b;
    cout<<"GCD of "<<a<< " and " <<b<< " is : " <<gcd(a,b)<<endl;
    cout<<"LCM of "<<a<< " and " <<b<< " is : " <<lcm(a,b);
}

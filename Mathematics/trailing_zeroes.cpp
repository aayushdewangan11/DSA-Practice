#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n){
    int fact ;
    if (n == 0){
        fact = 1;
    } else {
        fact = n* factorial(n-1);
    }
    //return fact;
    int count = 0;
    while(fact%10 == 0){
        count = count + 1;
        fact  = fact/10;
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<factorial(num);
}

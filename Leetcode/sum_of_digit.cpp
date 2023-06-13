#include<iostream>
#include<cmath>
using namespace std;

int sum_of_digit(int n){
    int sum = 0;
    for (int i = 0; n>0; i++){
        sum = sum + n%10;
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<sum_of_digit(n);
}

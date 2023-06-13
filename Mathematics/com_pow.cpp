#include<iostream>
#include<cmath>
using namespace std;

void com_pow(int a, int b){
    int c = pow(a,b);
    cout<<c;
}
int main(){
    int a,b;
    cin>>a>>b;
    com_pow(a,b);
}
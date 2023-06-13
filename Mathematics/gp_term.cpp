#include<iostream>
#include<cmath>
using namespace std;

double termOfGP(int A,int B,int N){
    double r = (double)B/A;
    int a = A*pow(r,N-1);
    return a;
}
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    cout<<termOfGP(a,b,n);
}
#include<iostream>
#include<cmath>
using namespace std;

void pow2(int n){
    if(n<=1){
        cout<<"NO"<<endl;
    }
    
    if(n&(n-1)== 0){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}    

int main(){
    int n;
    cin>>n;
    pow2(n);
}
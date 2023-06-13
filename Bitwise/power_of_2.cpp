#include<iostream>
#include<cmath>
using namespace std;

string pow_of_two(int n){
    if(n==2){
        cout<<"YES"<<endl;
    }
    for (int i = 2; i<=n; i++){
        int j = pow(2,i);
        if(n%j ==0){
            cout<<"YES"<<endl;
            break;
        }
        else {
            cout<<"NO"<<endl;
            break;
        }
    }
}

int main(){
    int T;
    cin>>T;
    int a;
    while(T--){
        cin>>a;
        pow_of_two(a);
    }
    
}

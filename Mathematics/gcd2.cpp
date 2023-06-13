#include<iostream>
#include<cmath>
using namespace std;

int gcd(int a, int b){
    int res = min(a,b);

    while(res>0){
        if ( a%res == 0 && b%res == 0){
            break;
        }
        res--;
    }
    return res;
}

int main(){
    int T;
    cin>>T;

    int a, b;
    while(T--){
        
        cin>>a>>b;
        cout<<gcd(a,b)<<endl;
    }
    

    
}
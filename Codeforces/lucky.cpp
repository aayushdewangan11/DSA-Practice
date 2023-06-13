#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long t;
        cin>>t;
        long long a,b;
        a = t/1000;
        b = t%1000;
        long long sum1 = 0, sum2 = 0;
        for (long long i = 0; a>0; i++){
            sum1 = sum1 + a%10;
            a = a/10;
        }
        for (long long i = 0; b>0; i++){
            sum2 = sum2 + b%10;
            b = b/10;
        }
        if(sum1 == sum2){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long m= -1;
        long long n= -1;
        if(a < c){
            m = 1;
        }
        if(a*b > c){
            n = b;
        }
        cout<<m<<" "<<n<<endl;
    }
}
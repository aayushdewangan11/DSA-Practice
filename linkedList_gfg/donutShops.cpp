#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int m= -1;
        int n= -1;
        if(a < c){
            m = 1;
        }
        if(a*b > c){
            n = b;
        }
        cout<<m<<" "<<n<<endl;
    }
}
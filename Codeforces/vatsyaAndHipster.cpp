#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int n = min(a,b);
    int m = abs(a-b);
    if(m<2){
        cout<<n<< " "<<0;
    }else {
        cout<<n<<" "<<m/2;
    }

}
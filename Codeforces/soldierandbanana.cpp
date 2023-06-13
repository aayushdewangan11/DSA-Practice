#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    if ((k*w*(w+1)/2) - n <= 0){
        cout<<0<<endl;
    } else {
        cout<<(k*w*(w+1)/2) - n<<endl;
    }
}
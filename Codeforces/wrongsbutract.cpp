#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    for (int i = k; i>0; i--){
        if(n%10 !=0 ){
            n = n-1;
        } else if(n%10 == 0){
            n = n/10;
        }
    }
    cout<<n<<endl;
}
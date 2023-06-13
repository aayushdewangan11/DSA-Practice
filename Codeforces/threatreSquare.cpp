#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a;
    cin>>n>>m>>a;
    long long ans1, ans2;
    if(n%a == 0){
        ans1 = n/a;
    }
    if (m%a == 0){
        ans2 =  m/a;
    }
    if(n%a != 0){
        ans1 = n/a + 1;
    }
    if(m%a != 0){
        ans2 = m/a + 1;
    }
    cout<<ans1*ans2;
}
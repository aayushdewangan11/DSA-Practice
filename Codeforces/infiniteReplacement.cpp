#include<bits/stdc++.h>
using namespace std;

long long find_pos(long long n){
    long long i=1;
    n--;
    while(n>=0)
    {
        n-=i;
        i++;
    }
    return (n+i);
}

int main(){
    int n;
    long long ans=0;
    cin>>n;
    ans=find_pos(n);
    cout<<ans;
}
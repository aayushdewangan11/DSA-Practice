#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int mtimes = n/m;
    int ans1 = n*a;
    int ans2 = ((mtimes*b)+ min((n%m) * a, b));

    int ans = min(ans1, ans2);
    cout<<ans;
}
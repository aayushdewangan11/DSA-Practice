#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int ans1,ans2,ans3,ans4;
    ans1 = a+b+c;
    ans2 = a*(b+c);
    ans3 = (a+b)*c;
    ans4 = a*b*c;

    cout<<max({ans1, ans2,ans3,ans4});
}
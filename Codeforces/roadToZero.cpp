#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    int x,y,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;

        if(x > y){
            swap(x,y);
        }
        long ans1 = 0, ans2 = 0;
        ans1 = x*a + y*a;
        long z = y - x;
        ans2 = z*a + x * b;

        cout<<min(ans1,ans2)<<endl;

    }

    return 0;
}
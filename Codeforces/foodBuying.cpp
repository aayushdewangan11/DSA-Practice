#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc,n,i,d,ans,p;
    cin>>tc;

    while (tc--)
    {
        cin>>n;

        ans = 0;

        while (1)
        {
            d = (n/10) * 10;
            ans += d;
            p = n-d;
            n = (n/10) + p;

            if (n < 10)
            {
                ans += n;
                break;
            }
        }

        cout<<ans<<endl;
    }
}
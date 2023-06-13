// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>ans;
//     for(int i = 0; i<n; i++){
//         int x;
//         cin>>x;
//         ans.push_back(x);
//     }
//     int inc = 1;
//     int lon = 1;
//     for(int i = 1; i<=n; i++){
//         if(ans[i]>ans[i-1]){
//             inc++;
//         }else{
//             inc = 1;
//         }
//         lon = max(inc, lon);
//     }
//     cout<<lon;
// }

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        ll n;

        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        ll count=1,max=1;

        for(i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
                count++;
            else
            {
                if(count>max)
                    max=count;

                count=1;
            }
        }

        if(count>max)
            max=count;

        cout<<max;

        return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n; cin>>n;
          vector<int>a(n);
          for(int i=0;i<n;i++) cin>>a[i];
          int m;
          cin>>m;
          vector<int>b(m);
          for(int i=0;i<m;i++) cin>>b[i];
          partial_sum(a.begin(),a.end(),a.begin());
          partial_sum(b.begin(),b.end(),b.begin());
          cout<<max((int)0,*max_element(a.begin(),a.end()))+ max((int)0,*max_element(b.begin(),b.end()));
          cout<<endl;
     }
}
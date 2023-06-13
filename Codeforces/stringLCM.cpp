#include<bits/stdc++.h>
using namespace std;

string check(string s, int k)
{
     string r="";
     while(k--)
     {
          r+=s;
     }
     
     return r;
}

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          string s,t;
          cin>>s>>t;
          int g= __gcd(s.length(),t.length());
          if(check(s,t.length()/g)== check(t,s.length()/g))
          cout<<check(s,t.length()/g)<<endl;
          else
          cout<<-1<<endl;
     }
}
#include<bits/stdc++.h>
using namespace std;

long long digit(long long n)
{
    long long sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    string s;
    cin>>s;
    int sum = 0;
    int cnt =0;
    int ans;
    if(s.size()!=1)
    {
        for(int i=0; i<s.size(); i++)
        {
            sum+=(s[i]-'0');
        }

        while(sum>=10)
        {
            ans=sum;
            sum=digit(ans);
            cnt++;
        }
        cout<<cnt<<endl;
    }
    else
        cout<<"0"<<endl;
    
}
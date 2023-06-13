#include<bits/stdc++.h>
long int book[100100];
using namespace std;

int main(){
    long int i,j,n,time,ans,sum;
    while(cin>>n>>time)
    {
        for(i=0;i<n;i++)
        {
            cin>>book[i];
        }
        //sort(book,book+n);
        j=-1,sum=0,ans=0;
        for(i=0;i<n;i++)
        {
            if(sum+book[i]<=time)
                sum+=book[i];
            else
            {
                sum+=book[i];
                while(sum>time)
                {
                    j++;
                    sum-=book[j];
                }
            }
            ans=max(ans,i-j);
        }
        cout<<ans<<endl;
    }
}
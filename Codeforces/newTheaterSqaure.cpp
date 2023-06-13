#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--)
	{
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		string s[n+1];
		for(int i=0;i<n;i++)
			cin>>s[i];
		bool check=true;
		if(y>2*x)
			check=false;
		long long total=0;
		for(int i=0;i<n;i++)
		{
			bool white=false;
			int cnt=0;
			for(int j=0;j<m;j++)
			{
				if(s[i][j]=='.')
				{
					white=true;
					cnt++;
				}
				else
				{
					white=false;
					
					if(check)
					{
						total+=((cnt/2)*y)+((cnt%2)*x);
					}
					else
						total+=(cnt*x);
					cnt=0;
				}
			}
			if(white)
			{
				if(check)
					{
						total+=((cnt/2)*y)+((cnt%2)*x);
					}
				else
					total+=(cnt*x);
			}
		}
		cout<<total<<endl;
	}
}
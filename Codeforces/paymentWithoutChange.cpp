#include<bits/stdc++.h>
using namespace std;

void swap_int(int *a , int *b)
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

int solve (int testcase)
{
	unsigned long long a , b , n , s ;
	cin >> a >> b >> n >> s ;
	if ((a*n + b) < s)
	{
		cout << "NO"<<endl;
		return 0 ;
	}
	int x = s / n ;
	int y = s % n ;
	if (y > b)
	{
		cout << "NO"<<endl;
		return 0 ;
	}
	else
	{
		cout << "YES"<<endl;
	}
}

int main()
{ 
	int t = 1 ;
	cin>>t;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
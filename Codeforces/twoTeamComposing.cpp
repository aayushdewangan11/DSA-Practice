#include<bits/stdc++.h>
using namespace std;

int main(){
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     int arr[n];
    //     for (int i = 0; i<n; i++){
    //         cin>>arr[i];
    //     }
    //     if(n==1){
    //         cout<<0<<endl;
    //     }
    //     int same = 0, dif = 0;
    //     sort(arr, arr +n);
    //     for (int i = 0; i<n; i++){
    //         if (arr[i]!= arr[i+1]){
    //             dif++;
    //         }
    //     }
    //     same = n-dif;

    //     if (same = 0){
    //         cout<<1<<endl;
    //     }
    //     else if(same<= dif){
    //         cout<<dif<<endl;
    //     }
        
    // }

    int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> cnt(n + 1);
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			++cnt[x];
		}
		int mx = *max_element(cnt.begin(), cnt.end());
		int diff = n + 1 - count(cnt.begin(), cnt.end(), 0);
		cout << max(min(mx - 1, diff), min(mx, diff - 1)) << endl;
	}
	
	return 0;
}
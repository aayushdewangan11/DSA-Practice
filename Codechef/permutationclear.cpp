#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	int n,k;
	int arr1[n];
	int arr2[k];
	int a;
	a = n-k;
	int res[a];
	while(t--){
	   cin>>n;
	   for(int i = 0; i<n; i++){
	       cin>>arr1[i];
	   }
	   cin>>k;
	   for(int j = 0; j<k; j++){
	       cin>>arr2[j];
	   }
	   
	   for(int i = 0; i<n; i++){
            for(int j = 0; j<k; j++){
                if (arr1[i]!= arr2[j]){
                    cin>>res[i];
                }
            }	       
	   }
	   for(int k = 0; k<a; k++){
	       cout<<res[k]<<' '<<endl;
	   }
	    
	}
	return 0;
}

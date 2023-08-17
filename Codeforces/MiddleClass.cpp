// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n, x;
//         cin>>n>>x;
//         int arr[n];
//         for(int i =0; i<n; i++){
//             cin>>arr[i];
//         }
//         sort(arr , arr+n);
//         int count =0;
//         for(int i =0; i<n/2; i++){
//             if((arr[i] + arr[n-i-1])/2 >= x) count = count +2;
            
//         }

//         cout<<count<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
void solve() {
 
    long long n , x ;
    cin >> n >> x ;
 
    vector<long long > v(n) ;
    int cnt = 0;
    for(auto &t : v){
        cin >> t;
    }
    sort(v.begin(),v.end()) ;
    long long have = 0 ;
    for(int i = n-1 ; i >= 0 ; i--){
        long long t = v[i] ;
        if(t >= x){
            cnt ++ ;
            have += (t-x) ;
        }
        else if( t + have >= x){
            cnt ++ ;
            have -= (x-t) ;
        }
    }
    cout << cnt << endl;
 
}
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
        solve();
    }
 
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--) {
//         int n, m;
//         cin >> n >> m;

//         vector<long long> a(n);
//         vector<long long> b(m);

//         for(int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         for(int i = 0; i < m; i++) {
//             cin >> b[i];
//         }

//         for(int i = 0; i < m; i++){
//             sort(a.begin(), a.end());
//             a[0] = b[i]; 
//         }

//         long long sum = accumulate(a.begin(), a.end(), 0);
//         cout<<sum<<endl;

//     }
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n);
        vector<long long> b(m);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        long long sum = 0;
        int j = 0;

        for(int i = 0; i < n && j < m && b[j] > a[i]; i++, j++){
            sum += b[j];
        }
        for(int i = j; i < n; i++){
            sum += a[i];
        }

        cout << sum << endl;
    }
    return 0;
}
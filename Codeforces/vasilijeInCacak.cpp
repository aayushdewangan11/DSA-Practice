#include<bits/stdc++.h>
using namespace std;

// bool solve(int n, int k, int x){
//     vector<int> v(n);
//     for(int i =1; i<=n; i++){
//         v.push_back(i);
//     }

//     int sum = accumulate(v.begin(), v.end() + k, 0);

//     for(int i =k; i<=n; i++){
//         if(sum == x) return true;
//         sum = sum + v[i] - v[i -k];
//     }

//     return false;
// }

void solve() {
    long long n, k, x;
    cin >> n >> k >> x;
    long long max_sum = (n * (n + 1) - (n - k) * (n - k + 1)) / 2;
    long long min_sum = k * (k + 1) / 2;
    if (x <= max_sum && x >= min_sum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int TC = 1;
    cin >> TC;
    while (TC--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int factors[2] = {0};
        int cnt = 0;

        for (int i = 2; i * i <= n && cnt < 2; i++) {
            if (n % i == 0) {
                factors[cnt++] = i;
                n /= i;
            }
        }
        if (cnt != 2 || n == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << factors[0] << " " << factors[1] << " " << n << endl;
        }
    }
    return 0;
}
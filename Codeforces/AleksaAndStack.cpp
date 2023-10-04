 #include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        
        int f = 1;
        long long l = 3;

        for (long long i = 0; i < n; i++) {
            if ((l + 1) % 3 == 0) {
                ++l;
            }
            cout << l << ' ';
            ++l;
        }
        cout << endl;
    }
}
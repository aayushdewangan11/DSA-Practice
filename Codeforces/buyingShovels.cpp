#include <iostream>
#include <vector>
#include <utility>
#include <climits>

#define KAMEHAMEHA ios_base::sync_with_stdio(0);
#define RASENGAN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        long long int n, k, ans = INT_MAX;
        cin >> n >> k;
        for (long long int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (n / i <= k)
                    ans = min(ans, i);
                if (i <= k)
                    ans = min(ans, n / i);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
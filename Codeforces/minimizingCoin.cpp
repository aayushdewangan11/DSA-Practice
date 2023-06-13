#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    cin >> x;
    vector<int> dp(x+1, INT_MAX);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = coins[i]; j <= x; j++) {
            if (dp[j-coins[i]] != INT_MAX) {
                dp[j] = min(dp[j], dp[j-coins[i]] + 1);
            }
        }
    }
    if (dp[x] == INT_MAX) {
        cout << "Impossible" << endl;
    }
    else {
        cout << dp[x] << endl;
    }

    return 0;
}

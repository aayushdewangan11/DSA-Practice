#include <bits/stdc++.h>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sticks(n);
    int totalLength = 0;
    for (int i = 0; i < n; i++) {
        cin >> sticks[i];
        totalLength += sticks[i];
    }

    long long targetLength = totalLength / n;

    // Initialize the dp table with zeros
    vector<vector<int>> dp(n+1, vector<int>(totalLength+1, 0));

    // Iterate over the sticks and lengths
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= totalLength; j++) {
            // If the current stick length is greater than the current length
            // then we can shorten the stick
            if (sticks[i-1] > j) {
                dp[i][j] = dp[i-1][j] + (sticks[i-1] - j);
            }
            // If the current stick length is less than the current length
            // then we can lengthen the stick
            else if (sticks[i-1] < j) {
                dp[i][j] = dp[i-1][j] + (j - sticks[i-1]);
            }
            // If the current stick length is equal to the current length
            // then we don't need to do anything
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    // Find the minimum cost by looking at the last row of the dp table
    int minCost = INT_MAX;
    for (int j = 1; j <= totalLength; j++) {
        minCost = min(minCost, dp[n][j]);
    }

    cout << minCost << endl;
}

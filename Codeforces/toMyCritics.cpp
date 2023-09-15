#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct DramaSchool {
    int startTime;
    int finishTime;
    int value;
};

bool compareDramaSchools(const DramaSchool &a, const DramaSchool &b) {
    return a.finishTime < b.finishTime;
}

int maxProfit(vector<DramaSchool> &schools) {
    sort(schools.begin(), schools.end(), compareDramaSchools);
    int n = schools.size();
    vector<int> dp(n);
    dp[0] = schools[0].value;

    for (int i = 1; i < n; i++) {
        int includeProfit = schools[i].value;
        int latestCompatibleSchool = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (schools[j].finishTime <= schools[i].startTime) {
                latestCompatibleSchool = j;
                break;
            }
        }

        if (latestCompatibleSchool != -1) {
            includeProfit += dp[latestCompatibleSchool];
        }

        dp[i] = max(dp[i - 1], includeProfit);
    }

    return dp[n - 1];
}

int main() {
    vector<DramaSchool> schools = {
        {1, 2, 100},
        {2, 5, 200},
        {3, 6, 300},
        {4, 8, 400},
        {5, 9, 500},
        {6, 10, 100}
    };

    int profit = maxProfit(schools);
    cout << "Maximum profit that can be obtained: " << profit << endl;

    return 0;
}
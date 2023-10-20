#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

const long long N = 2e5 + 5, MOD = 1e9 + 7, OO = 1e18;

long long a[N], b[N], q[N], s[N], w[N], xy[N], l, r, v, x, y, j;
string a1[N], b1[N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int Tc;
    cin >> Tc;
    while (Tc--) {
        map<char, long long> mp;
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            char k = s[i];
            if (mp[k] == 0) {
                ans += 2;
            } else {
                ans++;
            }
            mp[k]++;
        }
        cout << ans << "\n";
    }
    return 0;
}
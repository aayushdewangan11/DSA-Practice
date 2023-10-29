#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<string> vstr;
typedef vector<pll> vpl;
typedef set<ll> sll;

void solve()
{
    ll n, m, sx, sy, d, ans;
    cin >> n >> m >> sx >> sy >> d;
    ll up = sx - d, down = sx + d;
    ll left = sy - d, right = sy + d;

    if (left <= 1 && right >= m)
        ans = -1;
    else if (up <= 1 && down >= n)
        ans = -1;
    else if (up <= 1 && left <= 1)
        ans = -1;
    else if (down >= n && right >= m)
        ans = -1;
    else
        ans = m + n - 2;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
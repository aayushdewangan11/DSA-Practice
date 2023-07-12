#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<string> vstr;
typedef vector<pll> vpl;
typedef set<ll> sll;


#define loop(i,Start,End,Inc) for(ll i=Start;i<=End;i+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)


#define dp_x(x) cout<<x<<endl
#define dp_xy(x,y) cout<<x<<" "<<y<<endl
#define nl cout<<"\n"
#define printArray(v) for(auto k:v)cout<<k<<" "


#define pb push_back
#define in insert
#define all(v) v.begin(),v.end()
#define asc(v) sort(all(v))
#define dsc(v) asc(v),reverse(all(v))
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);


ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }


void solve() {
    ll n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    loop(i, 0, n - 1, 1) {
        if ((s1[i] == 'R' && s2[i] != 'R') || (s1[i] != 'R' && s2[i] == 'R')) {
            dp_x("NO");
            return;
        }
    }
    dp_x("YES");
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
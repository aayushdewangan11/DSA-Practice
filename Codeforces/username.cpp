#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    int min(l), max(l), ans(0);
    while (--n)
    {
        cin >> l;
        if (l < min)
        {
            min = l;
            ++ans;
        }
        if (l > max)
        {
            max = l;
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}
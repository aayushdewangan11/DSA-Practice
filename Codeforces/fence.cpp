#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    int arr[200005];
    cin >> n >> k;
    arr[0] = 0;
    for (int i = 1; cin >> arr[i]; i++) arr[i] += arr[i - 1];
    int m(100000000), r;
    for (int i = 0; i <= n - k; i++)
        if (arr[i + k] - arr[i] < m)
        {
            m = arr[i + k] - arr[i];
            r = i + 1;
        }
    cout << r << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool file = 0, rt = 1;
clock_t tStart;

void FAST_IO() {
    ios_base::sync_with_stdio(0);
    if (rt && file) {
        tStart = clock();
    }
    if (file) {
#ifndef _offline
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
    }
}

int main() {
    FAST_IO();
    int n, k;
    cin >> n >> k;
    vector<long long> vec;
    long long total = 0;
    for (int i = 0; i < n; ++i) {
        long long temp;
        cin >> temp;
        vec.push_back(temp);
        total += temp;
    }

    total -= vec[0];
    for (int i = 1; i < n; ++i) {
        vec[i] = max(vec[i], k - vec[i - 1]);
        total -= vec[i];
    }
    cout << abs(total) << endl;
    for (int i = 0; i < n; ++i)
        cout << vec[i] << " ";
    cout << endl;

    if (rt && file) {
        printf("\nTime : %.6fs", (double)(clock() - tStart) / CLOCKS_PER_SEC);
    }
    return 0;
}
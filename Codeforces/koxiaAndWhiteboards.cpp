#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        vector<int> b(m);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());

        long long sum = 0;
        int index = 0;

        for(int i = 0; i < n; i++) {
            if(index < m && b[index] > a[i]) {
                sum += b[index];
                index++;
            } else {
                sum += a[i];
            }
        }

        cout << sum << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int p;
    int v;
    for (int i = 0; i < n; i++) {
        cin>>p;
        if (p + k <= 5) {
            v++;
        }
    }

    cout<<v/3;
}

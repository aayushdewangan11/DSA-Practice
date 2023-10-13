#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b, c;
        cin>>a>>b>>c;

        // if (a == b && b == c) {
        //     cout << "YES"<<endl;
        // } else if (a == b || b == c || a == c) {
        //     cout << "YES"<<endl;
        // } else if (a + b == c || a + c == b || b + c == a) {
        //     cout << "YES"<<endl;
        // } else if ((a + b + c) % 2 == 0) {
        //     int arr[3] = {a, b, c};
        //     sort(arr, arr + 3);
        //     if (arr[0] + arr[1] == arr[2]) {
        //         cout << "YES"<<endl;
        //     } else {
        //         cout << "NO"<<endl;
        //     }
        // } else {
        //     cout << "NO"<<endl;
        // }
        int sum = a + b + c;
        if (sum % 9 == 0 && std::min({a, b, c}) >= sum / 9) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }

    }
}
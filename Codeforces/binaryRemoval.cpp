#include<bits/stdc++.h>
using namespace std;

int main(){

    long t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        long z(-1), a(-1);
        for(long p = 1; p < s.size(); p++){
            if(s[p - 1] == '0' && s[p] == '0'){z = p;}
            if(s[p - 1] == '1' && s[p] == '1' && a < 0){a = p;}
        }

        bool res = !(z > 0 && a > 0 && z > a);
        cout << (res ? "YES" : "NO") <<endl;
    }

}
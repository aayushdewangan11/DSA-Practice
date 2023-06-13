#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // string s;
    // cin>>s;
    // bool ans = false;
    // for (int i = 0; i<n-1; i++){
    //     for (int j = i+1; j<n-1; j++){
    //         if(s.substr(i,2) == s.substr(j,2)){
    //             cout<<s.substr(j,2);
    //             ans = true;
    //         }
    //     }
    //     if(ans == true){
    //         break;
    //     }
    // }

    int n;
    string s;
    cin >> n >> s;

    map<string, int> freq;
    for (int i = 0; i < n - 1; i++) {
        string twoGram = s.substr(i, 2);
        freq[twoGram]++;
    }

    string mostFrequentTwoGram;
    int maxFreq = 0;
    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            mostFrequentTwoGram = it.first;
        }
    }

    cout << mostFrequentTwoGram << endl;

    return 0;

}
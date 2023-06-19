#include<bits/stdc++.h>
using namespace std;

// int sum(int n){
//     int sum =0;
//     for(int i =0; n>0; i++){
//         sum = sum*10 + n%10;
//         n= n/10;
//     }
//     return sum;
// }

// bool diff(int n){
//     vector<int> v;
//     for(int i =0; n>0; i++){
//         v.push_back(n%10);
//         n = n/10;
//     }
//     bool ans = true;
//     sort(v.begin(), v.end());
//     for(int i =1; i<v.size(); i++){
//         if(v[i] == v[i-1]){
//             ans = false;
//             break;
//         }
//     }
//     return ans;
// }

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x;
        cin>>x;
        if (x<10){
            cout<<x<<"\n";
        } else if (x>45){
            cout<<-1<<"\n";
        } else{
            int n = x;
            vector<int> v;
            int bigEl = 9;
            int sum = 0;
            while (n!=sum){
                if ((n-sum)>bigEl){
                    sum+=bigEl;
                    v.push_back(bigEl);
                    bigEl--;
                } else{
                    v.push_back(n-sum);
                    sum=n;
                }
            }
            for (int j = v.size()-1; j >=0 ; j--) {
                cout<<v[j]<<"";
            }
            cout<<"\n";
        }
    }
}
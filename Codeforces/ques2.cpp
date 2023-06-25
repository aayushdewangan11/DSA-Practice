#include<bits/stdc++.h>
using namespace std;

int equalizeThemAll(vector<int>& a, int n) {
    sort(a.begin(), a.end());
    int ans = 0;
    int op2 =0;

    for(int i =0; i<n; i++){

        for(int j=0; j<n; j++){
            if(adjacent_find( a.begin(), a.end(), not_equal_to<>() ) == a.end()) break;
            if(a[j] = a.back() - 2 ){
                ans++;
                a[j] = a[j] +2;
            }else if(a[j] != a[n-1]){
                a[j] = a[j] +1;
                op2++;
            }
        }
        
    }
    ans = ans + op2/2;
    return ans;
}



int main() {
    int n = 4;
    vector<int> a = {3, 5, 4, 2};

    int result = equalizeThemAll(a, n);
    cout <<result <<endl;

}
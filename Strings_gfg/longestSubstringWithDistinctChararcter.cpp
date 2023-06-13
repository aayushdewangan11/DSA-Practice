#include<bits/stdc++.h>
using namespace std;

int disSubstring(string s){
    int n = s.length();
    int count = 0;
    for (int i =0; i<n; i++){
        vector <bool> visited(256);
        for (int j=i ; j<n; j++){
            if (visited[s[j]]==true){
                break;
            }else{
                count = max(count,j-i+1);
                visited[s[j]]== true;

            }
        } 
    }
    return count;
}

int main(){
    string s;
    cin>>s;
    cout<<disSubstring(s);

}
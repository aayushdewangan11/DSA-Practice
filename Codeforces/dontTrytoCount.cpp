#include<bits/stdc++.h>
using namespace std;

bool isSub(string x, string s){
    return x.find(s)!= string::npos;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;

        string x, s;
        cin>>x>>s;

        int count = 0;
        
        for(int i =0; i<m; i++){

            if(isSub(x,s) == true){
                break;
            }
            x = x + x;
            count++;
        }

        if(count != m) cout<<count<<endl;
        else cout<<-1<<endl;

    }
}
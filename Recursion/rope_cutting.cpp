#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int max_piece(int n, int a, int b, int c){
     if (n== 0){
        return 0;
     }
     if (n<0){
        return -1;
     }
     int res = max(max_piece(n-a,a,b,c), max(max_piece(n-b,a,b,c), max_piece(n-c,a,b,c)));

     if(res == -1){
        return -1;
     }else {
        return res +1;
     }
}

int main(){
    int T;
    cin>>T;
    int n,a,b,c;
    while(T--){
        cin>>n>>a>>b>>c;
        cout<<max_piece(n,a,b,c);
    }
}

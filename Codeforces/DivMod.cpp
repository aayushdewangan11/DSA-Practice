#include<bits/stdc++.h>
using namespace std;

int main(){

    long t;
    cin>>t;
    while(t--){
        long l, r, a;
        cin>>l>>r>>a;

        long d = r / a;
        long m = r % a;
        long res = d + m;
        long prev = (d - 1) * a + (a - 1);
        if(prev >= l){
            long tmp = (d - 1) + (a - 1);
            res = (res > tmp) ? res : tmp;
        }

        cout<<res<<endl;
    }

}
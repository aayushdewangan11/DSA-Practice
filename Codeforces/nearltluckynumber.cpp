#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int count = 0;
    for(int i = 0; n>0; i++){
        if(n%10 == 4 || n%10 == 7){
            count += 1;
        } 
        n = n/10;
    }
    if (count == 4 || count == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
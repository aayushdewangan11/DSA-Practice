#include<iostream>
#include<cmath>
using namespace std;

void bitsring(int n, int i, string s){
    if (i==n){
        cout<<s<<endl;
        return;
    }
    bitsring(n, i+1, s+"0");
    bitsring(n, i+1, s+"1");
}

int main(){
    int n;
    cin>>n;
    bitsring(n, 0, "");
}
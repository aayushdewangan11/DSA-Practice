#include<bits/stdc++.h>
using namespace std;

void toh(int n, char a, char b, char c){
    if (n == 1){
        cout<<"Move "<<1<<" from "<<a<<" to "<<c<<endl;
        return ;
    }
    toh(n-1, a,c,b);
    cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
    toh(n-1, b,a,c);
}

int main(){
    int n;
    char a = 'A';
    char b = 'B';
    char c = 'C';
    cout<<"Enter the number of disc : ";
    cin>>n;
    toh(n,a,b,c);
}
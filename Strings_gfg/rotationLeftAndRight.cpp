#include<bits/stdc++.h>
using namespace std;

void leftRotate(string& s, int d){
    reverse(s.begin(), s.begin() +d);
    reverse(s.begin() +d, s.end());
    reverse(s.begin(), s.end());
}

void rightRotate(string& s, int d){
    leftRotate(s, s.length() -d);
}

int main(){
    string str;
    getline(cin,str);
    int d;
    cin>>d;

    leftRotate(str,d);
    cout<<str<<endl;
    rightRotate(str,d);
    cout<<str;
}
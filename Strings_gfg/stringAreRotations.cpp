#include<bits/stdc++.h>
using namespace std;

bool rotations(string s1, string s2){
    int n1 = s1.length();
    int n2 = s2.length();

    if (n1!= n2){
        return false;
    }
    return (s1+s2).find(s2)!= string::npos;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<rotations(s1,s2);

}
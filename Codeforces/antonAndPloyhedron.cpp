#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    int ans = 0;
    while(n--){
        cin>>s;
        if(s== "Tetrahedron"){
            ans = ans + 4;
        } else if(s== "Cube"){
            ans = ans + 6;
        } else if(s== "Octahedron"){
            ans = ans + 8;
        } else if(s== "Dodecahedron"){
            ans = ans + 12;
        } else if(s== "Icosahedron"){
            ans = ans + 20;
        }
    }
    cout<<ans;
}

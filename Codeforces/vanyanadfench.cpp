#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    cin>>n>>h;
    int a;
    int w = 0;;
    while(n--){
        cin>>a;
        if(a <= h){
            w = w+1;
        }
        else if(a>h){
            w = w+2;
        }
    }
    cout<<w;


}
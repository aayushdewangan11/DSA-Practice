#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 0;
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        if(s == "--X"){
            --x;
        }else if(s == "++X"){
            ++x;
        }else if(s == "X--"){
            x--;
        }if(s == "X++"){
            x++;
        }
    }
    //cout<<x<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    bool ans = false;
    while(n--){
        cin>>a;
        if(a == 1){
            ans = true;
        }
    }
    if(ans == true){
        cout<<"HARD"<<endl;
    }else if (ans == false) {
        cout<<"EASY"<<endl;
    }

}
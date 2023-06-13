#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ant = 0;
    int dan = 0;
    for (int i = 0; i<n; i++){
        char c;
        cin>>c;
        if (c == 'A'){
            ant++;
        }else if (c == 'D'){
            dan++;
        }
    }
    if(ant>dan){
        cout<<"Anton"<<endl;
    }else if(ant<dan){
        cout<<"Danik"<<endl;
    }else {
        cout<<"Friendship"<<endl;
    }
    
}
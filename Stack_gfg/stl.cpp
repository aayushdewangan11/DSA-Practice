#include<bits/stdc++.h>
using namespace std;

void showStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> s;
    s.push(20);
    s.push(10);
    s.push(5);
    s.push(1);

    showStack(s);

    cout<<s.size()<<endl;
    cout<<s.top();


}
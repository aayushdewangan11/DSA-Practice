#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;
}
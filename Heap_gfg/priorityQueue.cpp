#include<bits/stdc++.h>
using namespace std;
 int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(20);
 
    cout<<pq.size();
    cout<<endl;
    while(pq.empty() == false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
 }
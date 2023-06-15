#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(1);

    for(auto it = s.begin(); it!= s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it = s.rbegin(); it!= s.rend(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    auto f = s.find(20);
    if(f != s.end()) cout<<"found"<<endl;
    else cout<<"Not found"<<endl;
}
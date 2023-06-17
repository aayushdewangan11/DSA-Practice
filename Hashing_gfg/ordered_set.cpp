#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(15);

    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    cout<<s.size()<<endl;

    auto itr = s.find(5);
    cout<<*itr<<endl;

}

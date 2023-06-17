#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(15);
    s.insert(5);

    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    cout<<s.size()<<endl;

    auto itr = s.find(5);
    s.erase(itr);
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }

}

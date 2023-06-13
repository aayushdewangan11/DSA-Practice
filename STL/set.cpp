#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    set<string> :: iterator it;
    for(it = s.begin(); it!= s.end(); ++it){
        cout<<(*it)<<endl;
    }
}

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("bca");
    s.insert("cab");
    print(s);
    cout<<endl;
    auto it = s.find("abc");
    auto it2 = s.find("bac");
    if (it!= s.end()){
        cout<<(*it)<<endl;
    }
    if (it2!= s.end()){
        cout<<(*it2)<<endl;
    }

}
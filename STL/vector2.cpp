#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    for(int i = 0; i<5; ++i){
        v.push_back(i);
    }

    cout<<"Ouput of Bedin and end : ";
    for(auto i = v.begin(); i!= v.end(); ++i){
        cout<<*i<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,5,6};
    vector<int> :: iterator it;
    for (it = v.begin(); it!=v.end(); ++it){
        cout<<(*it)<<endl;
    }
    cout<<endl;

    vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator it2;
    for(it2 = v_p.begin(); it2!= v_p.end(); ++it2){
        cout<<(it2->first)<<" "<<(it2->second)<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

void vectorOfPairs(vector<pair<int,int>> &v){
    cout<<"Sixe of vector of pair : "<<v.size()<<endl;
    for(int i = 0; i<v.size(); i++){
        cout<<v[i].first<< " "<<v[i].second<<"  ";
    }
    cout<<endl;
 
}

//Default
/*
int main(){
    vector<pair<int,int>> v = {{1,2}, {3,4}, {5,6}};
    vectorOfPairs(v);

}*/

int main(){
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    vectorOfPairs(v);
}
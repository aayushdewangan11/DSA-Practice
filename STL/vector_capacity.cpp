#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    for(int i = 0; i<5; ++i){
        v.push_back(i);
    }

    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"Max Size : "<<v.max_size()<<endl;

    v.resize(3);
    cout<<"Element in vector are : ";
    for(auto i = v.begin();i!=v.end(); ++i){
        cout<<*i<<" ";
    }
    cout<<endl;

    if(v.empty()== true){
        cout<<"Vector is empty"<<endl;
    }else {
        cout<<"Vector is not empty"<<endl;
    }
    v.resize(5);
    v.shrink_to_fit();
    cout<<"Element in vector are : ";
    for(auto i = v.begin();i!=v.end(); ++i){
        cout<<*i<<" ";
    }

}
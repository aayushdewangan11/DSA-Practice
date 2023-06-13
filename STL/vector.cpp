#include<bits/stdc++.h>
using namespace std;

/*void printVector(vector<int>v){
    cout<<"Size of vector : "<<v.size()<<endl;
    
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
        printVector(v);
        
    }
    // printVector(v);
}*/

void printVec(vector<int> v){
    cout<<"Size : "<<v.size()<<endl;
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v(10);
    v.push_back(1);
    v.push_back(2);
    v.pop_back();
    printVec(v);
    
    vector<int> v2 = v;
    v2.push_back(2);
    v2.push_back(3);
    v2.pop_back();
    printVec(v2);
    
}
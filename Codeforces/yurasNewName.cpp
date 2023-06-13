#include<bits/stdc++.h>
using namespace std;
 
void ans(){
    string s;
    cin>>s;
    string s2;
    for(auto &it:s){
        if(it=='_'){
            if(s2.empty() || s2.back()=='_')
                s2.push_back('^');  
            s2.push_back('_');
        }   
        else
            s2.push_back(it);       
    }
    if(s2.back()=='_')
        s2.push_back('^');
    if(s2.size()==1)
        s2+='^';
        
    cout<<s2.size()-s.size()<<"\n";
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        ans();
    }
    
    return 0;
}
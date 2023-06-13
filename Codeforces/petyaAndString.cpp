#include<bits/stdc++.h>
#include<cstring>
using namespace std;

/*int main(){
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int len = s1.length();
    int t;
    for (int i = 0; i<len;i++){
        if(s1[i]==s2[i]){
            t = 0;
            continue;
        } else if(s1[i]>s2[i]){
            t = 1;
            continue;
        }else if(s1[i]<s2[i]){
            t = -1;
            continue;
        }
    }
    if(t ==0){
        cout<<0;
    }else if(t==1){
        cout<<1;
    }else if(t== -1){
        cout<<-1;
    }
}*/
int main(){
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout<<strcmp(s1.c_str(),s2.c_str());

}
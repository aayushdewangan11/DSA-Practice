#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    int lowercase = 0;
    int uppercase = 0;
    
    for (int i = 0; i < str.length(); i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            uppercase++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            lowercase++;
        }
    }
    if (uppercase > lowercase){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout<<str<<endl;
    } else if (lowercase>uppercase){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout<<str<<endl;
    } else {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout<<str<<endl;
    }
}
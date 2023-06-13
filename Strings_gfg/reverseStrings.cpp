#include<bits/stdc++.h>
using namespace std;

void reverse(char s[], int low, int high){
    while(low<=high){
        swap(s[low], s[high]);
        low++;
        high--;
    }
}

void reversewords(char s[], int n){
    int start  =0;
    int end;
    for(end = 0; end< n; end++){
        if(s[end] == ' '){
            reverse(s, start, end-1);
            start = end +1;
        }
    }
    reverse(s, start, n-1);
    reverse(s, 0, n-1);
}

int main(){
    string s;
    int n = s.length();
    char str[n];
    getline(cin,s);

    strcpy(str, s.c_str());
    reversewords(str,n);
    for (int i = 0; i < n; i++) 
        cout << str[i];

}
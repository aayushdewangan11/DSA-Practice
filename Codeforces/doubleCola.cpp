#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    string list[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    while(i*5<n){
        n = n - i*5;
        i = i*2;
    }
    cout<<list[(n-1)/i]<<endl;   
}
#include<bits/stdc++.h>
using namespace std;

int floorSquareRoot(int n){
    if (n == 0 || n == 1)
		return n;
    
    int i = 1;
    int result = 1;
    while(result<=n){
        i++;
        result = i * i;   
    } 
    return i -1;
}

int main(){
    int n;
    cin>>n;
    cout<<floorSquareRoot(n);
}
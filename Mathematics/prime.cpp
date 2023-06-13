#include<iostream>
#include<cmath>
using namespace std;


string prime(int a){
    if (a<=1){
        return "No";
    }else if (a = 2){
        return "Yes";
    }
    for(int i = 2; i<a; i++){
        if (a%i== 0){
            return "NO";
        }
        return "Yes";

    }
}

int main(){
    int a;
    cin>>a;
    cout<<prime(a);
}
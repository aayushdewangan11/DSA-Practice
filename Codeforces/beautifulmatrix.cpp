#include<bits/stdc++.h>
using namespace std;

int main(){
    int s =0;
    for(int n=1; n<=5;n++){
        for(int m =1;m<=5;m++){
            cin>>s;
            if(s==1){
                cout<< abs(n-3)+ abs(m-3)<<endl;
            }
        }
    }
    
}
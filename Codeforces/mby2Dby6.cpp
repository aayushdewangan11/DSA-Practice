#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int count = 0;
        while(num!=1){
            if(num%6==0)
                num/=6,count++;
            else if(num%3==0)
                num*=2,count++;
            else{
                count=-1;
                break;
            }
	    }
        cout<<count<<endl;
    }
}
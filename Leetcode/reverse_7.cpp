#include <iostream>
#include <cmath>
using namespace std;

int reverse(int x){
    int rev = 0;
        if(x>0){
            for(int i = 0; x>0; i++){
                rev = rev*(pow(10,1)) + x%10;
                x = x/10;
            }
        
        }
        else {
            for(int i = 0; x<0; i++){
                rev = (rev*10) - x%10;
                x = x/10;
            
            } 
            rev = -rev;  
        }
        return rev;
}        

int main(){
    int n;
    cin>>n;
    cout<<reverse(n);

    return 0;
}
#include<iostream>
#include<cmath>

using namespace std;

int subtractProductAndSum(int n) {
        int prod = 1;
        int sum  = 0;
        int m = n;
        
        for(int i = 0; n>0; i++){
            sum = sum + n%10;
            n = n/10;
        }

        for(int i = 0; m>0; i++){
            prod = prod *(m%10);
            m =m/10;
            
        }
        return prod - sum;
}
int main(){
    int n;
    cin>>n;
    cout<<subtractProductAndSum(n);
}

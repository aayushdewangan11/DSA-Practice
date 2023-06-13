#include <iostream>
#include <cmath>
using namespace std;
    
    long long digitsInFactorial(int N)
    {
        long long count = 0;
        
        long long fac = 1;
        for (int i = 2; i<=N; i++){
            fac = fac*i;
        }

        //cout<<fac<<endl;
        for(int i =0; fac>0; i++){
            count = count +1;
            fac = fac/10;
        }
        return floor(count) +1;
    }
int main(){
    int n;
    cin>>n;
    cout<<digitsInFactorial(n);
}
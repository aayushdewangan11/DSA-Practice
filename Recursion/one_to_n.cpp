#include<bits/stdc++.h>
using namespace std;

void one_to_n(int n){
    /*for(int i = 1; i<=n; i++){
        cout<<i<<endl;
        //return one_to_n(n-1);
    }*/
    if (n==0){
        return ;
    }
    one_to_n(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    one_to_n(n);

    return 0;
}
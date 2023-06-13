#include<bits/stdc++.h>
using namespace std;
void n_to_1(int n){
    if (n == 0){
        return;
    }
    cout<<n<<endl;
    return n_to_1(n-1);

}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    n_to_1(n);

    return 0;
}
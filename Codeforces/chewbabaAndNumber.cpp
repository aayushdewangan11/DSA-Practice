#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;

    // int num =0;
    // for(int i =0; n>0; i++){
    //     if(n %10 > 4){
    //         num = num*10 + 9 - n%10;
    //         n= n/10;
    //         continue;
    //     }
    //     else {
    //         num = num*10 + n%10;
    //         n= n/10;
    //     }
    // }
    // cout<<num;
    string x;
    cin >> x;

    for (auto& digit : x)
    {
        if (digit > '4')
            digit = '9' - digit + '0';
    }

    if (x.front() == '0')
        x.front() = '9';
    cout << x << endl;
}
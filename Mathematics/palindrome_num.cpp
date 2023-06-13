#include<iostream>
#include<cmath>
using namespace std;

bool palindrome(int num){
    int pal = 0;
    int org = num;
    for (int i =1; i<=org;){
        int ld = org%10;
        pal = pal*10 + ld;
        org = org/10;
    }
    if (pal == num){
        cout<<"YES";
        
    }else {
        cout<<"NO";
    }

    /* while(org !=0){
        int ld = org%10;
        pal = pal*10 + ld;
        org = org/10;
    }
    if (pal == num){
        cout<<"YES";
        
    }else {
        cout<<"NO";
    } */
}
int main(){
    cout<<"Enter a number to check Palindrome Property : ";
    int n;
    cin>>n;
    palindrome(n);
}
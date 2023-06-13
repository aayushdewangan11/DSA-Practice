#include<iostream>
//#include<cmath>
using namespace std;


int main() {
    int num;
    cout<<"ENTER A NUMBER : ";
    cin>>num;

    int sum = 0;
    int org= num;
    for (int i = 1; i <=num;){
        sum = sum +1 ;
        num = num/10;
    }
    cout<<"Number of digit in "<<org<< " = " <<sum;

    //return 0;

}
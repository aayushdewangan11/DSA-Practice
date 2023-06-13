#include<iostream>
#include<cmath>
using namespace std;

/*void hamming_weight(string binary){
    int count = 0;
    for(int i = 0; i<= binary.size(); i++){
        if(binary[i]== 1){
            count++;
        }
        cout<<count;

    }
}*/


int main(){
    string binary;
    getline(cin, binary);
    hamming_weight(binary);
}
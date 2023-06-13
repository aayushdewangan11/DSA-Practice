#include<bits/stdc++.h>
using namespace std;


const int n = 4;
void transpose(int mat[n][n]){
    int temp [n][n];
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            temp[i][j]= mat[j][i];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            mat[i][j]= temp[i][j];
        }
    }
}

int main(){
    // int n;
    // cin>>n;
    int mat[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    transpose(mat);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}
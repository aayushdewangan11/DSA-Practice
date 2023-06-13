#include<bits/stdc++.h>
using namespace std;

const int r= 4,c=4;
//cin>>r>>c;
void printSnake(int mat[r][c]){
    for(int i = 0; i<r;i++){
        if(i%2== 0){
            for(int j = 0; j<c;j++){
                cout<<mat[i][j]<<" ";
            }
        }else {
            for(int j= c-1; j>=0; j--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
}

int main(){
    // int r,c;
    // cin>>r>>c;
    int mat[r][c];
    for(int i = 0; i<r; i++){
        for(int j= 0; j<c; j++){
            cin>>mat[i][j];
        }
    }

    printSnake(mat);
}
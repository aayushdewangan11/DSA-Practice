#include<bits/stdc++.h>
using namespace std;


const int n = 4;
void rotate90(int mat[n][n]){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    for(int i = 0; i<n; i++){
        int low = 0;
        int high = n-1;
        while(low<high){
            swap(mat[low][i], mat[high][i]);
            low++;
            high--;
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
    rotate90(mat);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}
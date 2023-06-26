#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; // n -> number of vertices && m -> number of edges
    cin>>n>>m;

    int adjMat[n+1][n+1];
    for(int i =0; i<m ; i++){
        int u, v;
        cin>>u>>v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }
}
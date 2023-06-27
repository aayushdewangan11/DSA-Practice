#include<bits/stdc++.h> 
using namespace std; 

bool topologicalSort(vector<int> adj[], int V){ 
    vector<int> indegree(V, 0);
    for(int x =0; x<V; x++){
        for(int i : adj[x]){
            indegree[i]++;
        }
    }

    queue<int> q;
    for(int i=0; i<V; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    int count =0;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i : adj[u]){
            indegree[i]--;
            if(indegree[i]== 0){
                q.push(i);
            }
        }
        count++;
    }
    if(count == V){
        return false;
    }else return true;
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 1); 
    addEdge(adj,4, 1); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 1);  
  
    cout<<topologicalSort(adj,V);

	return 0; 
} 

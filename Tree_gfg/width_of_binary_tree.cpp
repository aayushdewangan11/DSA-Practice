#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node * right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

int width(Node* root){
    if(root == NULL) return 0;
    queue<Node* > q;
    q.push(root);
    int count =0;
    while(!q.empty()){
        int x = q.size();
        count = max(count, x);
        for(int i = 0; i<x; i++){
            Node* curr = q.front();
            q.pop();
            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
        }
    }
    return count;
}

int main(){
    Node* root = new Node(10);
    root ->left = new Node (20);
    root-> right = new Node(30);

    root->right->left = new Node(40);  
    root->right->right = new Node(50);
    
    cout<<width(root);
}
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void levelOrder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* curr = q.front();
        cout<<curr->data<<" ";
        q.pop();

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->left != NULL){
            q.push(curr->right);
        }
    }
}

int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node (3);
    root->left->left = new Node (4);
    root->left->right = new Node (5);
    root->right->left = new Node (6);
    root->right->right = new Node (7);

    levelOrder(root); 
}
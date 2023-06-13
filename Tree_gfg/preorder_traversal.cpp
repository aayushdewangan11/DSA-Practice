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

void preorder(Node* root){
    if(root!= NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    Node* root = new Node(10);
    root ->left = new Node (20);
    root-> right = new Node(30);

    root->left ->left = new Node(25);
    root->right->left = new Node(35);  
    root->right->right = new Node(40);

    preorder(root);
}
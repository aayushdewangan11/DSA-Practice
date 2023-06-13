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

int isBalanced(Node* root){
    if(root == NULL) return 0;
    
    int l = isBalanced(root->left);
    if(l == -1) return -1;

    int h = isBalanced(root->right);
    if(h == -1) return -1;

    if(abs(l-h) >1) return -1;
    return (max(l,h) +1);
}

int main(){
    Node* root = new Node(10);
    root ->left = new Node (20);
    root-> right = new Node(30);

    root->right->left = new Node(40);
    root->right->right = new Node(50);
    
    cout<<isBalanced(root);
}
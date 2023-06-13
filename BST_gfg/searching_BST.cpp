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

bool search(Node* root, int x){
    if(root == NULL) return false;

    if(root->data == x){
        return true;
    }

    if(root->data >x){
        return search(root->left, x);
    }

    if(root->data < x){
        return search(root->right, x);
    }
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(2);
    root->right = new Node(7);
    root->right->left = new Node(6);
    root->right->right = new Node(8);

    cout<<search(root, 6);
}

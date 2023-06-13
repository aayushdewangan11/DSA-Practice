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

bool isSum(Node* root){
    if(root== NULL){
        return true;
    }
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    int sum =0;
    if(root->left != NULL){
        sum = sum + root->left->data;
    }
    if(root->right != NULL){
        sum = sum + root->right->data;
    }
    return (root->data ==  sum && isSum(root->left) && isSum(root->right));
}

int main(){
    Node* root = new Node(10);
    root ->left = new Node (2);
    root-> right = new Node(8);

    root->right->left = new Node(3);
    root->right->right = new Node(5);
    
    cout<<isSum(root);
}
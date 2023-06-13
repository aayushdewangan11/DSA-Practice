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

int height(Node* root){
    if(root==NULL){
        return 0;
    }else {
        return (max(height(root->left), height(root->right)) +1);
    }
}

int diameter(Node * root){
    if(root == NULL) return 0;
    int d1 = height(root->left)+ height(root->right) +1;
    int d2 = diameter(root->left); 
    int d3 = diameter(root->right);

    return max(d1, max(d2,d3));
}

int main(){
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(60);
	root->right->left->left=new Node(50);
	root->right->right->right=new Node(70);
    
    cout<<height(root)<<endl;
    cout<<diameter(root);
}
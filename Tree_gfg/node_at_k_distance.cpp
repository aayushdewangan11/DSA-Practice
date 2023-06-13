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

void nodeAtK(Node * root, int k){
    if(root == NULL || k<0){
        return;
    }
    if(k == 0){
        cout << root->data << " ";
		return;
    }

    nodeAtK(root->left, k-1);
    nodeAtK(root->right, k-1);
}

int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node (3);
    root->left->left = new Node (4);
    root->left->right = new Node (5);
    root->right->left = new Node (6);
    root->right->right = new Node (7);

    nodeAtK(root, 2); 
}
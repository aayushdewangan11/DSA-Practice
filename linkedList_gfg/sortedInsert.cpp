#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* sortedInsert(Node* head, int x){
    Node* temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    if(x< head->data){
        temp->next = head;
        return temp;  
    }

    Node* curr = head;
    while(curr->next->data < x && curr->next != NULL){
        curr= curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    
    return head;
    
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    int x = 25;

    sortedInsert(head, 25);

    if
}

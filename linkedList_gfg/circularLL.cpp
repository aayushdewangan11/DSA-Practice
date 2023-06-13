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

// void print(Node*head){
//     if(head==NULL){
//         return;
//     }
//     cout<<head->data<<" ";
//     for(Node* p = head->next; p!= head; p = p->next){
//         cout<<p->data<<" ";
//     }
// }

// void print(Node* head){
//     if(head == NULL) return;

//     cout<<head->data;

//     for(Node* p = head->next; p!= head; p= p->next){
//         cout<<p->data<<" ";
//     }
// }


void print(Node * head){
    if(head == NULL) return;

    Node * temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!= head);
}

int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    print(head);
}
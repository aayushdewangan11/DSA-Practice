#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data =x;
        next= NULL;
    }
};

// struct Node{
//     int data;
//     Node *next;
//     Node (int x){
//         data = x;
//         next = NULL;
//     }
// };

void printList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
// void print(Node *head){
//     Node *curr = head;
//     while(curr != NULL){
//         cout<<curr->data<<" ";
//         curr = curr->next;
//     }
// }

int main(){
    Node *head = new Node(10);
    head-> next = new Node (20);
    head -> next-> next= new Node(30);
    head ->next->next->next= new Node(40);

    printList(head);

    // Node *head = new Node (10);
    // head -> next = new Node (20);
    // head -> next -> next = new Node (30);
}


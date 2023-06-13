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

void printList(Node *head){
    Node *curr = head;
    if(curr == NULL){
        return;
    }
    cout<<curr->data<<" ";
    printList(curr->next);
}

int main(){
    Node *head = new Node(10);
    head-> next = new Node (20);
    head -> next-> next= new Node(30);
    head ->next->next->next= new Node(40);

    printList(head);

}


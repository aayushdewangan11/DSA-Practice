#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node (int x){
        data = x;
        next = NULL;
    }
};

Node* insertAtPosition(Node *head, int x, int pos){
    Node *temp = new Node(x);
    if(head == NULL){
        if(pos == 1){
            return temp;
        }else{
            return head;
        }
    }
    if(pos==1){
        temp->next=head;
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i<pos - 1; i++){
        curr = curr-> next;
        if(curr == NULL){
            return head;
        }
    }
    temp ->next = curr-> next;
    curr->next = temp;
    return head;
}

void Print(Node* head){
    Node* curr = head;
    while(curr!= NULL){
        cout<<curr-> data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(10);
    head-> next = new Node(20);
    head-> next->next = new Node(30);
    Print(head);
    head = insertAtPosition(head, 25,2);
    Print(head);

}
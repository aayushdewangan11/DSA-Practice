#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next= NULL;
    }
};

struct Queue{
    Node *front, * rear;
    Queue(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int x){
        Node *temp = new Node(x);
        if(rear == NULL){
            front = rear = temp;
        }
        rear->next = temp;
        rear = temp;
    }

    void dequeue(){
        if(front == NULL){
            return;
        }
        Node* temp = front;
        front = front->next;

        if(front == NULL){
            rear = NULL;
        }

        delete(temp);
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    cout << "Queue Front : " << (q.front)->data << endl; 
	cout << "Queue Rear : " << (q.rear)->data; 
}
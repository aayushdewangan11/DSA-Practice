#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int front, rear, capacity;
    int * queue;
    Queue(int c){
        front = rear = 0;
        capacity = c;
        queue = new int;
    }

    void enqueue(int x){
        if(capacity == rear){
            return;
        }
        else {
            queue[rear] = x;
            rear++;
        }
        return;
    }

    void dequeue(){
        if(front == rear){
            return;
        }else {
            for(int i = 0; i<rear - 1; i++){
                queue[i] = queue[i+1];
            }
            rear--;
        }
        return;
    }

    void printFront(){
        if(front == rear){
            return;
        }
        cout<<queue[front];
        return;
    }

    void printRear(){
        if(front== rear){
            return;
        }
        cout<<queue[rear];
        return;
    }

    void queueDisplay(){
        int i;
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }
        for (i = front; i < rear; i++) {
            printf(" %d <-- ", queue[i]);
        }
        return;
    }

};

int main(){
    Queue q(4);
    q.queueDisplay();
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    q.dequeue();
    q.queueDisplay();
    q.printFront();
}
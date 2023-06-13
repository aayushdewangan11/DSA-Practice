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

struct MyStack{
    Node* head;
    int s;
    MyStack(){
        head = NULL;
        s = 0;
    }

    void push(int x){
        Node* temp = new Node(x);
        temp->next = head;
        head = temp;
        s++;
    }

    int pop(){
        if(head== NULL){
            return INT_MAX;
        }
        int res = head->data;
        Node* temp = head;
        head = head->next;
        delete(temp);
        s--;
        return res;
    }

    int peek(){
        if (head == NULL){
            return INT_MAX;
        }
        return head->data;
    }

    int size(){
        return s;
    }

    bool isEmpty(){
        return head== NULL;
    }
};

int main(){
    MyStack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
}
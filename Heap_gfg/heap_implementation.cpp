#include<bits/stdc++.h>
using namespace std;

class minHeap{
    int * arr;
    int cap;
    int size;

    public:

    minHeap(int c){
        size =0;
        cap =c;
        arr = new int[c];
    }

    int left(int i) { return (2*i + 1); } 
    int right(int i) { return (2*i + 2); } 
    int parent(int i) { return (i-1)/2; }
};

int main(){
    minHeap h(11);

}
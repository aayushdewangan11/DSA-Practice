 #include<bits/stdc++.h>
 using namespace std;

class MinHeap{
    int * arr;
    int size;
    int capacity;

    public :
    MinHeap(int c){
        size = 0;
        capacity = c;
        arr = new int[c];
    }
        int left(int i){
            return 2* i +1;
        }
        int right(int i){
            return 2*i +2;
        }
        int parent(int i ){
            return (i-1)/2;
        }

        void insert(int x){
            if(size == capacity) return;
            size++;
            arr[size -1] = x;
            for(int i =size -1; i!= 0 && arr[parent(i)] > arr[i];){
                swap(arr[i], arr[parent(i)]);
                i = parent(i);
            }
        }

        void minHeapify(int i){
            int smallest = i;
            int left = 2*i +1;
            int right = 2*i +2;

            if(left < size && arr[i]> arr[left]) smallest = left;
            if(right < size && arr[i]> arr[right]) smallest = right;

            if(smallest !=i){
                swap(arr[i], arr[smallest]);
                minHeapify(smallest);
            }
        }

        int extractMin(){
            if(size == 0) return INT_MIN;
            if(size == 1){
                size--;
                return arr[0];
            }

            swap(arr[0], arr[size -1]);
            size--;
            minHeapify(0);
            return arr[size];
        }

        void decreaseKey(int i, int x){
            arr[i] = x;
            while(i!= 0 && arr[parent(i)]> arr[i]){
                swap(arr[i], arr[parent(i)]);
                i = parent(i);
            }
        }

        void deleteKey(int i){
            decreaseKey(i, INT_MIN);
            extractMin();
        }

        void buidHeap(){
            for(int i = (size-2)/2; i>=0; i--){
                minHeapify(i);
            }
        }

};


 int main(){
    MinHeap h(11);
	h.insert(3);
	h.insert(2);
	h.deleteKey(1);
	h.insert(15);
	h.insert(5);
	h.insert(4);
	h.insert(45);
	cout << h.extractMin() << " ";
	h.decreaseKey(2, 1);
	return 0;
 }
#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
private:
    vector<int> heap, names;

    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

    void heapifyUp(int i) {
        while (i != 0 && heap[parent(i)] < heap[i]) {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }

    void heapifyDown(int i) {
        int largest = i;
        int left = leftChild(i);
        int right = rightChild(i);

        if (left < heap.size() && heap[left] > heap[largest])
            largest = left;

        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;

        if (largest != i) {
            swap(heap[i], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void insert(int key, char name) {
        heap.push_back(key);
        names.push_back(name);
        heapifyUp(heap.size() - 1);
    }

    int extractMax() {
        if (heap.size() == 0)
            throw runtime_error("Heap is empty");

        int root = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);

        return root;
    }

    void printHeap() {
        for (int i = 0; i < ) {
            cout << i << " ";
        }
        cout << endl;
        
    }
};

int main(){
  MaxHeap hospital;
  hospital.insert(1, 'A');
  hospital.insert(2, 'B');
  hospital.insert(3, 'C');
  hospital.insert(4, 'D');
  hospital.insert(5, 'E');
  hospital.printHeap();

}
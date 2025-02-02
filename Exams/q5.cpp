#include <iostream>
#include <vector>
template <typename T>
class PriorityMaxHeap {
private:
std::vector<T> heap;
void heapifyUp(int index) {
int parent = (index - 1) / 2;
while (index > 0 && heap[index] > heap[parent]) {
std::swap(heap[index], heap[parent]);
index = parent;
parent = (index - 1) / 2;
}
}
void heapifyDown(int index) {
int leftChild = 2 * index + 1;
int rightChild = 2 * index + 2;
int largest = index;
if (leftChild < heap.size() && heap[leftChild] > heap[largest]) {
largest = leftChild;
}
if (rightChild < heap.size() && heap[rightChild] > heap[largest]) {
largest = rightChild;
}
if (largest != index) {
std::swap(heap[index], heap[largest]);
heapifyDown(largest);
}
}
public:
PriorityMaxHeap() {}
void insert(const T& value) {
heap.push_back(value);
heapifyUp(heap.size() - 1);
}
T extractMax() {
if (heap.empty()) {
throw std::out_of_range("Heap is empty.");
}
T maxElement = heap[0];
heap[0] = heap.back();
heap.pop_back();
heapifyDown(0);
return maxElement;
}
bool isEmpty() const {
return heap.empty();
}
};
int main() {
PriorityMaxHeap<int> priorityMaxHeap;
priorityMaxHeap.insert(10);
priorityMaxHeap.insert(20);
priorityMaxHeap.insert(5);
priorityMaxHeap.insert(15);
while (!priorityMaxHeap.isEmpty()) {
std::cout << priorityMaxHeap.extractMax() << " ";
}
return 0;
}
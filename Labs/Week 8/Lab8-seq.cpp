/*
Written by Harish, for MTE 140 : Lab 8. 
*/

#include <iostream>
using namespace std;

class Queue {
private:
    int *items;   // Dynamic array
    int capacity; // capacity of the array (user specified)
    int front;    // to store the first value's index 
    int rear;     // to store the last value's index
    int size;     // to keep track of the size of array

public:
    Queue(int cap) : capacity(cap), size(0), front(0), rear(-1) {
        //Initialize the dynamic array `items` with size = `capacity`
    }

    ~Queue() {
        // Delete dynamic array `items` and set it to nullptr. 
    }

    bool isFull() {
        //return if the size is equal to capacity
    }

    bool isEmpty() {
        //return is the size is 0
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << item << endl;
            return;
        }
        //Enque the value here
        cout << item << " enqueued to queue" << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue" << endl;
            return -1;
        }

        //Dequeue the value here and return as `item`; uncomment next two lines. 
        //cout << item << " dequeued from queue" << endl;
        //return item;
    }

    void print(){

        if (isEmpty()){
            cout << "Queue is empty, nothing to print!" << endl;
        }
        else
        {      
            cout << "The elements in the queue are:" << endl;
            //Iterate through the array and print all elements
            cout << endl;
        }     
    }

    void print_memory(){

        if (isEmpty()){
            cout << "Queue is empty, nothing to print!" << endl;
        }
        else
        {   
            cout << "The memory location of the elements are:" << endl;
            //Iterate through the array and print memory locations
        }     
    }
};

int main() {
    Queue q(5);  //FIFO

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<endl;

    q.print_memory();
    q.print();
    cout<<endl;

    q.dequeue();
    q.dequeue();
    cout<<endl;

    q.print_memory();
    q.print();
    cout<<endl;

    q.enqueue(60);
    q.enqueue(20);
    q.enqueue(40);
    cout<<endl;

    q.print();
    q.print_memory();

    return 0;
}

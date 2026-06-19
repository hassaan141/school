/*
-------------
Lab 8
Thursday, June 27th, 2024
-------------

Solutions
Written by Harish for MTE 140. 
*/

#include <iostream>
using namespace std;

class Queue{  

private:
    int capacity;  
    int size;
    int iFront;
    int iRear;
    int *items;

public:
    Queue(int cap);
    ~Queue();

    void enqueue(int x);
    int dequeue();
    int peek();

    void print();
};


Queue::Queue(int cap): capacity(cap), size(0), iFront(0), iRear(-1){
    if (cap <= 0) {
        cout << "Capacity must be a positive integer";
    }
    else {
        items = new int[capacity];
    }
}

Queue::~Queue(){// properly deallocated dynamic memory in the linked data structure.

    delete [] items;
    items = nullptr;

}

void Queue::enqueue(int x){
    //check if Queue is full
    if(size == capacity){
        cout<<"Queue is full! cannot enqueue." <<endl;
    }
    else{ // not full, enqueue at iRear
        iRear = (iRear + 1) % capacity;
        items[iRear] = x;
        size++;
    }
}

int Queue::dequeue(){
    
    if(size == 0){
        cout<<"Queue is empty! cannot dequeue." <<endl;
        return -999999; 
    }
    else{ // dequeue from iFront
        int value = items[iFront];
        iFront = (iFront + 1) % capacity;
        size--;
        return value;
    }
}

int Queue::peek(){

    if(size == 0){
        cout<<"Queue is empty! nothing to peek." <<endl;
        return -9999;
    }
    else{
        return items[iFront];
    }
}

void Queue::print(){

    if(size == 0){
        cout<<"Queue is empty! nothing to print." <<endl;
        return;
    }
    else{
        int count = size;
        int index = iFront;
        cout << "Queue elements: ";
        while (count--) {
            cout << items[index] << " ";
            index = (index + 1) % capacity;
        }
    cout<<endl;
    }
}

int main(){
    Queue queue1(8);
    Queue *queue2 = new Queue(8);

    cout<<"Test 1: "<<endl;
    cout<<"Queue 1: "<<endl;
    queue1.print();
    cout<<"Queue 2: "<<endl;
    queue2->print();
    cout<<endl;

    cout<<"Test 2: "<<endl;
    queue1.enqueue(99);
    queue1.enqueue(88);
    queue1.enqueue(44);
    queue1.enqueue(22);

    cout<<"Queue 1: "<<endl;
    queue1.print();
    cout<<"Queue 2: "<<endl;
    queue2->print();
    cout<<endl;

    cout<<"Test 3: "<<endl;
    queue2->enqueue( queue1.dequeue() );
    queue2->enqueue( queue1.dequeue() );
    queue2->enqueue( queue1.dequeue() );

    cout<<"Queue 1: "<<endl;
    queue1.print();
    cout<<"Queue 2: "<<endl;
    queue2->print();
    cout<<endl;


    cout<<"Test 4: "<<endl;
    cout<<queue1.dequeue()<<endl;
    cout<<queue1.dequeue()<<endl;
    cout<<endl;

    cout<<"Test 5: "<<endl;
    queue1.enqueue(1);
    queue1.enqueue(2);
    queue1.enqueue(3); //queue1 = 1,2,3 

    cout<<queue1.dequeue()<<endl;   
    cout<<queue1.dequeue()<<endl; //queue1 = 3 

    queue1.enqueue(4);
    queue1.enqueue(5);
    queue1.enqueue(6); //queue1 = 3,4,5,6

    cout<<queue1.dequeue()<<endl;
    cout<<queue1.dequeue()<<endl; //queue1 = 5,6

    queue1.enqueue(7);
    queue1.enqueue(8);
    queue1.enqueue(9); //queue1 = 5,6,7,8,9

    cout<<queue1.dequeue()<<endl;
    cout<<queue1.dequeue()<<endl; // queue1 = 7,8,9

    queue1.enqueue(10);
    queue1.enqueue(11);
    queue1.enqueue(12); // queue1 = 7,8,9,10,11,12

    cout<<"Queue 1: "<<endl;
    queue1.print();
    cout<<"Queue 2: "<<endl;
    queue2->dequeue();

    delete queue2;

    return 0;
}




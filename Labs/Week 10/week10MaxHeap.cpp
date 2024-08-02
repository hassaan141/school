#include<iostream>
#include<string>

using namespace std;

class HeapNode{
private:
    int key;                              // Heap item priority key
    string data;                         // data value

public:
    HeapNode();
    HeapNode(int key, string data);     // Constructor
    int getKey();                         // Return item priority
    void setKey(int key);               // Set the priority key value
    string getData();                    // Return data item
    void setData(string data);          // Set the data item value
};

//-----------------------------------
// Constructor
//-----------------------------------
HeapNode::HeapNode(): key(0), data(""){ }

HeapNode::HeapNode(int k, string str): key(k), data(str){ }


//-----------------------------------
// Return item priority
//-----------------------------------
int HeapNode::getKey(){
    return key;
}

//-----------------------------------
// Set the priority key value
//-----------------------------------
void HeapNode::setKey(int key){
    key = key;
}

//-----------------------------------
// Return data item
//-----------------------------------
string HeapNode::getData(){
    return data;
}

//-----------------------------------
// Set the data item value
//-----------------------------------
void HeapNode::setData(string str){
    data = str;
}



class Heap{
private:
    HeapNode     *elements;                 // Pointer to dynamically allocated array
    int          size;              // Number of elements in the heap
    int          capacity;

public:
    Heap(int cap);
    ~Heap();                                 // Destructor

    bool Enqueue(HeapNode item);
    void ReheapUp(int index);     // Reheap after inserting item

    HeapNode Dequeue();                     // Get item at the root
    void ReheapDown(int index);   // Reheap after removing item

    int getSize();                    // Return number of elements in the heap
    void printAll();                         // Print all the elements in the heap
};

//---------------------------------------
// constructor
//---------------------------------------
Heap::Heap(int cap){
    elements = new HeapNode[cap];
    size = 0;
    capacity = cap;
}

//---------------------------------------
// Destructor
//---------------------------------------
Heap::~Heap(){
    delete[] elements;
}

//---------------------------------------
// Add an item to the heap
//---------------------------------------
bool Heap::Enqueue(HeapNode item){
    if(size == capacity) return false;
    else {
        elements[size + 1] = item; // Copy item into array
        ReheapUp(size + 1);
        size++;
        return true;
    }
}



//---------------------------------------
// Reheap after inserting item
//---------------------------------------
void Heap::ReheapUp(int index){
    ////////////////////////////////////////////////////////////////////

    //Until reaching the root node (no more parent)
    if(index == 1) return;

    //	If the parent has a smaller value than the node, swap with the parent
    int parent = index / 2;
    if(elements[parent].getKey() < elements[index].getKey()){
        // Swap these two elements
        HeapNode temp = elements[parent];
        elements[parent] = elements[index];
        elements[index] = temp;
        // Make recursive call till reheaping completed
        ReheapUp(parent);
    }
    else return;

    ////////////////////////////////////////////////////////////////////

}


//---------------------------------------
// Get item at the root
//---------------------------------------
HeapNode Heap::Dequeue(){
    if(size == 0)  return HeapNode(-9999, "EMPTY_HEAP_RETURN");  // special case

    //index 1 is the root. Use temp to save the to-be-returned node.
    HeapNode temp = HeapNode(elements[1]);  //default copy constructor, shallow copy

    // Copy last item into root
    elements[1] = elements[size]; //default assignment copy

    size--;

    // Reheap the tree
    ReheapDown(1);  //from root node, index 1

    return temp;
}

//---------------------------------------
// Reheap after removing item
//---------------------------------------
void Heap::ReheapDown(int index){
    ////////////////////////////////////////////////////////////////////
    //Exit when reaching a leaf node (the bottom)
    if (2 * index > size) return;

    //	If there is any child of the node at index,
    int chosenChild;

    if (2 * index == size) chosenChild = size;  // only one child, it must be the left child
    else { // if two children, find the larger child. If same, e.g., prefer left.
        int leftChild = 2 * index;
        int rightChild = 2 * index + 1;
        if( elements[leftChild].getKey() >= elements[rightChild].getKey() ) chosenChild = leftChild;
        else chosenChild = rightChild;
    }


    if(elements[chosenChild].getKey() > elements[index].getKey()){
        //If the child has a key larger than the node, swap the node with that child.
        HeapNode temp = elements[chosenChild];
        elements[chosenChild] = elements[index];
        elements[index] = temp;

        ReheapDown(chosenChild); //Continue re-heap downwards
    }
    else return;

    ////////////////////////////////////////////////////////////////////

}




//---------------------------------------
// Return number of elements in the heap
//---------------------------------------
int Heap::getSize(){
    return size;
}

//---------------------------------------
// Print all the elements in the heap
//---------------------------------------
void Heap::printAll(){
    if(size == 0) cout<< "Empty!" <<endl;
    for(int i=1; i<=size; i++){
        cout << "Heap element " << i << ". key = " << elements[i].getKey() << ",  data = " << elements[i].getData() << endl;
    }
}

//main
int main(){

    Heap *theHeap = new Heap(20);  // Create a heap of the default size

    HeapNode obj_a = HeapNode(10, "a");
    theHeap->Enqueue( obj_a );
    theHeap->Enqueue( HeapNode(5, "b"));
    theHeap->Enqueue( HeapNode(7, "c"));
    theHeap->Enqueue( HeapNode(4, "d"));
    theHeap->Enqueue( HeapNode(2, "e"));
    theHeap->Enqueue( HeapNode(1, "f"));
    theHeap->printAll(); //this is breadth first, level traversal



    cout<<"dequeue data: " <<  theHeap->Dequeue().getData() << endl;
    theHeap->printAll(); //this is breadth first, level traversal

	cout<<"enqueue 7 (g) " << endl;
	theHeap->Enqueue( HeapNode(7, "g"));
    theHeap->printAll(); //this is breadth first, level traversal

	cout<<"enqueue 5 (h) " << endl;
	theHeap->Enqueue( HeapNode(5, "h"));
    theHeap->printAll(); //this is breadth first, level traversal

    cout<<"dequeue data: " <<  theHeap->Dequeue().getData() << endl;
    theHeap->printAll(); //this is breadth first, level traversal

    cout<<"dequeue data: " <<  theHeap->Dequeue().getData() << endl;
    theHeap->printAll(); //this is breadth first, level traversal

    cout<<"dequeue data: " <<  theHeap->Dequeue().getData() << endl;
    theHeap->printAll(); //this is breadth first, level traversal

    cout<<"dequeue data: " <<  theHeap->Dequeue().getData() << endl;
    theHeap->printAll(); //this is breadth first, level traversal

    cout<<"dequeue data: " <<  theHeap->Dequeue().getData() << endl;
    theHeap->printAll(); //this is breadth first, level traversal

    cout<<"dequeue data: " <<  theHeap->Dequeue().getData() << endl;
    theHeap->printAll(); //this is breadth first, level traversal

    cout<<"dequeue data: " <<  theHeap->Dequeue().getData() << endl;
    theHeap->printAll(); //this is breadth first, level traversal


    return 0;
}

// Heap element 1. key = 10,  data = a
// Heap element 2. key = 5,  data = b
// Heap element 3. key = 7,  data = c
// Heap element 4. key = 4,  data = d
// Heap element 5. key = 2,  data = e
// Heap element 6. key = 1,  data = f

// dequeue data: a

// Heap element 1. key = 7,  data = c
// Heap element 2. key = 5,  data = b
// Heap element 3. key = 1,  data = f
// Heap element 4. key = 4,  data = d
// Heap element 5. key = 2,  data = e

// enqueue 7 (g)

// Heap element 1. key = 7,  data = c
// Heap element 2. key = 5,  data = b
// Heap element 3. key = 7,  data = g
// Heap element 4. key = 4,  data = d
// Heap element 5. key = 2,  data = e
// Heap element 6. key = 1,  data = f

// enqueue 5 (h) 

// Heap element 1. key = 7,  data = c
// Heap element 2. key = 5,  data = b
// Heap element 3. key = 7,  data = g
// Heap element 4. key = 4,  data = d
// Heap element 5. key = 2,  data = e
// Heap element 6. key = 1,  data = f
// Heap element 7. key = 5,  data = h

// dequeue data: c

// Heap element 1. key = 7,  data = g
// Heap element 2. key = 5,  data = b
// Heap element 3. key = 5,  data = h
// Heap element 4. key = 4,  data = d
// Heap element 5. key = 2,  data = e
// Heap element 6. key = 1,  data = f

// dequeue data: g

// Heap element 1. key = 5,  data = b
// Heap element 2. key = 4,  data = d
// Heap element 3. key = 5,  data = h
// Heap element 4. key = 1,  data = f
// Heap element 5. key = 2,  data = e

// dequeue data: b

// Heap element 1. key = 5,  data = h
// Heap element 2. key = 4,  data = d
// Heap element 3. key = 2,  data = e
// Heap element 4. key = 1,  data = f

// dequeue data: h

// Heap element 1. key = 4,  data = d
// Heap element 2. key = 1,  data = f
// Heap element 3. key = 2,  data = e

// dequeue data: d

// Heap element 1. key = 2,  data = e
// Heap element 2. key = 1,  data = f

// dequeue data: e

// Heap element 1. key = 1,  data = f
// dequeue data: f
// Empty!
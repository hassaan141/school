////////////////////////////////////////////////////////
//WEEK 8

//DESTRUCTOR TO DEALLOCATE MEMORY

Queue::~Queue(){// properly deallocated dynamic memory in the linked data structure.

    Node *temp = nullptr;

    while(head != nullptr){
        temp = head->next;
        delete head;
        head = temp;
    }

}

//ENQUEUE FROM A QUEUE

void enqueue(int x){
    //step 1: create a new node to hold x
    Node *newNode = new Node(x);
    //step 2: check if stack is full
    if(size == capacity){
        cout<<"Queue is full! cannot enqueue." <<endl;
    }
    else{ // step 3: if not full, enqueue the new node at the tail
        ////////////////////////////////
        if(size == 0){ //special case
            head = newNode;
            tail = head;
        }
        else{ //enqueue from the tail
            tail->next = newNode;
            tail = newNode;
        }
        size++;
        ////////////////////////////////
    }
}

//DEQUEUE FROM A QUEUE

int dequeue(){
    //Step 1: check if there is anything to dequeue
    if(size == 0){
        cout<<"Queue is empty! cannot dequeue." <<endl;
        return -999999; //EMPTY_VAL
    }
    else{//Step 2: dequeue from the head by freeing and returning the current head and making the next node the new head
        ///////////////////////////////
        int returnVal = head->data;
        if(size == 1){ //special case, only one item - head and tail are the same
            delete head;
            head = nullptr;
            tail = nullptr;
        }
        else{
            Node *nextNode = head->next;
            delete head;
            head = nextNode;
        }
        size--; //OR size = size - 1;
        return returnVal;
        ///////////////////////////////
    }
}

//PEEK FROM A QUEUE

int Queue::peek(){
    //Step 1: check if there is any node
    if(size == 0){
        cout<<"Queue is empty! nothing to peek." <<endl;
        return -9999;
    }
    else{//Step 2: if queue is not empty
        return head->data;
    }
}

//PRINT QUEUE FROM FIRST NODE TO END NODE

void Queue::print(){    // from head to tail, i.e., from front of queue to end of queue
    //check if there is anything to print
    if(size == 0){
        cout<<"Queue is empty! nothing to print." <<endl;
        return;
    }
    else{
        Node *p = head;
        while(p != nullptr){
            cout<< p->data << ", ";
            p = p->next;
        }
        cout<<endl;
    }
}

//ADDING TO A SEQUENTIAL CIRCULAR LIST

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

//DEQUEUEING FROM A CIRCULAR LIST
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

///////////////////////////////////////////////////////////

//WEEK 9

//PRINTING Breath First Traversal
void BinaryTree::printBFT(){
    /////////////////////
    if(root == NULL) {
        cout << "Tree is empty." << endl;
        return;
    }
    queue <BinaryTreeNode*> Q;
    Q.push(root);
    while (!Q.empty()) {
        BinaryTreeNode *P = Q.front();
        Q.pop();
        cout<< P->iData<<", ";
        if (P->leftChild != NULL) Q.push(P->leftChild);
        if (P->rightChild != NULL) Q.push(P->rightChild);
    }
    cout << endl;
}

//DEPTH FIRST TRAVERSAL
//Pre-Order Traversal Code
void BinaryTree::preorderTraversal(BinaryTreeNode* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    preorderTraversal(node->leftChild);
    preorderTraversal(node->rightChild);
}

//IN ORDER TRAVERSAL
void BinaryTree::inorderTraversal(BinaryTreeNode* node) {
    if (node == NULL) return;
    inorderTraversal(node->leftChild);
    cout << node->data << " ";
    inorderTraversal(node->rightChild);
}

// POST ORDER TRAVERSAL
void BinaryTree::postorderTraversal(BinaryTreeNode* node) {
    if (node == NULL) return;
    postorderTraversal(node->leftChild);
    postorderTraversal(node->rightChild);
    cout << node->data << " ";
}

 ///////////////////////////////////////////////////////////////////

 //WEEK 10

 //RECURSIVE INSERT IN BST
Node* insertRecursive(Node* node, int key) {
        if (node == nullptr) {
            return new Node(key);
        }

        if (key < node->key) {
            node->left = insertRecursive(node->left, key);
        } else if (key > node->key) {
            node->right = insertRecursive(node->right, key);
        }
        return node;
    }

//RECURSIVE DELETE IN BST

//ENQUEUE AND REHEAP UP IN MAX HEAP
bool Heap::Enqueue(HeapNode item){
    if(size == capacity) return false;
    else {
        elements[size + 1] = item; // Copy item into array
        ReheapUp(size + 1);
        size++;
        return true;
    }
}

void Heap::ReheapUp(int index){

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

}

//DEQUEUE AND REHEAP DOWN

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

void Heap::ReheapDown(int index){

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

}


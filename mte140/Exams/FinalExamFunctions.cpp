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

//DELETE 1
Node* deleteRecursive(Node* root, int key) {
        //traverse through tree to find the node you want to delete
        if (root == nullptr) return root;
        if (key < root->key) {
            root->left = deleteRecursive(root->left, key);
        } else if (key > root->key) {
            root->right = deleteRecursive(root->right, key);

        } else {
            //Node with 1 or 0 child
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;

            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            //Find the next smallest number in the right subtree and replace root with it, then recuresivly delete the right subtree
            Node* temp = minValueNode(root->right);
            root->key = temp->key;
            root->right = deleteRecursive(root->right, temp->key);
        }
        return root;
    }

//DELETE 2 (LECTURES)

    //IF LEAF NODE
    if (current_node->leftChild == NULL && current_node->rightChild == NULL) {
    // Step 3.1: a special case that if current_node is the root node
    if (current_node == T) {
        delete *pT;
        *pT = NULL;
        return true;
    }

    // Step 3.2: if it is not the root node then remove it
    delete current_node;
    if (isLeftChild) {
        parent_node->leftChild = NULL;
    } else {
        parent_node->rightChild = NULL;
    }
    return true;
}

    //IF ONE CHILD
    
    // Step 4.1: if left child is not empty, right child is empty
if (current_node->leftChild != NULL && current_node->rightChild == NULL) {
    if (isLeftChild) {
        parent_node->leftChild = current_node->leftChild;
    } else {
        parent_node->rightChild = current_node->leftChild;
    }
    delete current_node;
    return true;
}


// Step 4.2: if right child is not empty, left child is empty
else if (current_node->leftChild == NULL && current_node->rightChild != NULL) {
    if (isLeftChild) {
        parent_node->leftChild = current_node->rightChild;
    } else {
        parent_node->rightChild = current_node->rightChild;
    }
    delete current_node;
    return true;
}

    //IF TWO CHILDREN
    // Step 5
if (current_node->leftChild != NULL && current_node->rightChild != NULL) {
    // Step 5.1: find successor
    BinarySearchTreeNode* successor = current_node->rightChild;
    isLeftChild = false; // at the first step, successor is the right child of its parent.
    BinarySearchTreeNode* successor_parent = current_node;

    while (successor->leftChild != NULL) {
        successor_parent = successor;
        successor = successor->leftChild;
        isLeftChild = true;
    }

    // Step 5.2: Replace the node D to delete by the successor
    current_node->key = successor->key;
    current_node->value = successor->value;
}






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


////////////////////////////////////////////////////////////////////////////////////

//WEEK 11

//AVL TREES

//INSERTING AND BALANCE FACTOR
Node* insert(Node* node, int key) {
    if (node == nullptr)
        return new Node(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node; // Duplicate keys are not allowed in AVL tree

    node->height = 1 + std::max(getHeight(node->left), getHeight(node->right));

    int balance = getBalanceFactor(node);

    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

//LEFT AND RIGHT ROTATE
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = std::max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = std::max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

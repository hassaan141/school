/*
Written for MTE 140 by Harish Prakash (TA). Co-TA: Mahboubah Taftian; Instructor: Dr. Nassim Paryab
Topic: Binary Search Tree (BST) Operations

All things to be done by you will be mentioned with a //TO-DO comment in the code.

To-Do:
1. Implement the insert function to insert elements in BST. 
2. Implement the search function to find a given value in BST. 

Bonus: 
--> Print the tree vertically i.e., as we usually write it from top(root) to bottom(children). 
*/

#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

struct Node {
    //TO-DO
    //Define the structure for a Tree Node with three values:
    //1. key(int) that stores the value of the node.
    //2. left(pointer of type Node) that points to the left child of node. 
    //3. right(pointer of type Node) that points to the right child of node. 

    //Constructor to initialize values
    Node(int value) {
        key = value;
        left = right = nullptr;
    }
};

class BST {

public:
    
    Node* root;

    //TO-DO:
    //A constructor for BST which initialize root as null pointer. 

    //Private function to call the recursive insert function. 
    //You can also directly write the recursive function here. 
    // I've just encapsulate the recursive function inside a private function.
    void insert(in\t key) {
        root = insertRecursive(root, key);
    }
    
    //Private function to call the recursive delete function
    void deleteKey(int key) {
        root = deleteRecursive(root, key);
    }

    //Private function to search for a value in the BST and return it. 
    Node* search(int key) {
        return searchRecursive(root, key);
    }

    //Private function to print the tree as a sequence of numbers, level-by-level. 
    //This is just an ancillary function. 
    void printlevelorder() {
        if (root == nullptr) return;

        queue<Node*> q; //Initializing the queue STL
        q.push(root);

        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            cout << current->key << " ";

            if (current->left != nullptr) q.push(current->left);
            if (current->right != nullptr) q.push(current->right);
        }
        cout << endl;
    }

    //Private Function to print the entire tree, horizontally 
    //(left to right --> root to children)
    void printTree() {
        printTreeRec(root, 0);
    }

private:
    Node* insertRecursive(Node* node, int key) {

        //TO-DO

        //1. Check if the node is a null pointer, and if so, 
        //create a new Node with the given key value and return it. 

        //2. If not, 
        //2.1 Check if the value of given key is less than the given node's key (node->key). 
        //If so, do a recursive call to the insertRecursive function with 
        //appropriate input parameters to iterate through the left branch.

        //2.2. If 2.1 is false, Check if the value of given key is greater than the given node's key (node->key). 
        //If so, do a recursive call to the insertRecursive function with 
        //appropriate input parameters to iterate through the right branch.

        return node;
    }

    Node* deleteRecursive(Node* root, int key) {

        //Case 1: 
        //If the root node is nullptr i.e., there's no tree.
        if (root == nullptr) return root;

        //Case 2.1: 
        // If the key to be deleted is smaller than the root's key,
        // then it lies in the left subtree
        if (key < root->key) {
            root->left = deleteRecursive(root->left, key);

        //Case 2.2:
        // If the key to be deleted is greater than the root's key,
        // then it lies in the right subtree
        } else if (key > root->key) {
            root->right = deleteRecursive(root->right, key);

        //Case 3:
        // If key is same as root's key, then this is the node to be deleted!
        } else {

            //Case 3.1:
            //If the node to delete doesn't have a left child, replace the deleted node
            //with the right child of the deleted node.
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;

            //Case 3.2:
            //If the node to delete doesn't have a right child, replace the deleted node
            //with the left child of the deleted node.
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            //Case 3.3:
            //If the node to delete has both left and right child, 
            //the do inorder succession to find the next greatest node to replace 
            //the deleted node.

            Node* temp = minValueNode(root->right);
            root->key = temp->key;
            root->right = deleteRecursive(root->right, temp->key);
        }
        return root;
    }

    //Function to search recursively 
    Node* searchRecursive(Node* node, int key) {

        //TO-DO:
        //Case 1:
        // Check if the node is a null pointer or if the given key is the node's key 
        //i.e., if the given key is just the root node, so that we don't have to go further.
        //If so, return node.

        //If not, Case 2.1:
        //Check if the key is less than node->key and traverse left "recursively"
        //If not, check if the key is greater than node->key and traverse right "recursively"
        //Return the searched result. Look at the main function's call and return as required.

        if (key < node->key) {
            return searchRecursive(node->left, key);
        }

        return searchRecursive(node->right, key);
    }

    //Find the next min. value after the argument node passed in.
    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr)
            current = current->left;
        return current;
    }

    //Public Function to print the entire tree, horizontally 
    //(left to right --> root to children)
    void printTreeRec(Node* node, int space) {
        if (node == nullptr)
            return;

        space += 10;

        printTreeRec(node->right, space);

        cout << endl;
        for (int i = 10; i < space; i++)
            cout << " ";
        cout << node->key << "\n";

        printTreeRec(node->left, space);
    }
};

int main() {
    BST bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    cout << "Tree structure:" << endl;
    bst.printTree();

    cout << "\nDeleting 20" << endl;
    bst.deleteKey(20);
    bst.printTree();

    cout << "\nDeleting 30" << endl;
    bst.deleteKey(30);
    bst.printTree();

    cout << "\nDeleting 50" << endl;
    bst.deleteKey(50);
    bst.printTree();

    int key = 40;
    cout<<"\nSearching for "<<key <<" ...";
    if (bst.search(key) != nullptr) {
        cout << "\nFound " << key << endl;
    } else {
        cout << key << " not found" << endl;
    }

    return 0;
}

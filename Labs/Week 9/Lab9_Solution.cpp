#include <iostream>
#include <queue>
#include <algorithm> // For std::max
using namespace std;

class BinaryTreeNode {
public:
    int data;
    BinaryTreeNode *leftChild;
    BinaryTreeNode *rightChild;

    // Constructor declaration
    BinaryTreeNode(int data);
};

class BinaryTree {
public:
    BinaryTreeNode *root;

    // Constructor declaration
    BinaryTree();

    // Method declarations
    int depth();
    int Height(BinaryTreeNode* T);
    void printTree(BinaryTreeNode* node, int space, bool isRight);
    void print();
    void preorderTraversal(BinaryTreeNode* node);
    void inorderTraversal(BinaryTreeNode* node);
    void postorderTraversal(BinaryTreeNode* node);
};

// Constructor definition for BinaryTreeNode
BinaryTreeNode::BinaryTreeNode(int data) : data(data), leftChild(NULL), rightChild(NULL) {}

// Constructor definition for BinaryTree
BinaryTree::BinaryTree() : root(NULL) {}

int BinaryTree::depth() {
    return Height(root);
}

// Function to calculate the height of the tree
int BinaryTree::Height(BinaryTreeNode *T) {
    if (T == NULL) return -1;
    else if (T->leftChild == NULL && T->rightChild == NULL) return 0;
    else {
        return 1 + max(Height(T->leftChild), Height(T->rightChild)); // Using std::max to find the maximum depth
    }
}

// Function to print the tree structure with branches
void BinaryTree::printTree(BinaryTreeNode* node, int space, bool isRight) {
    if (node == NULL) return;

    space += 10;
    printTree(node->rightChild, space, true);

    cout << endl;
    for (int i = 10; i < space; i++) cout << " ";
    if (isRight) {
        cout << "/--";
    } else {
        cout << "\\--";
    }
    cout << node->data << "\n";

    printTree(node->leftChild, space, false);
}

void BinaryTree::print() {
    printTree(root, 0, true);
}

// Preorder traversal method
void BinaryTree::preorderTraversal(BinaryTreeNode* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    preorderTraversal(node->leftChild);
    preorderTraversal(node->rightChild);
}

// Inorder traversal method
void BinaryTree::inorderTraversal(BinaryTreeNode* node) {
    if (node == NULL) return;
    inorderTraversal(node->leftChild);  // Traverse left subtree
    cout << node->data << " ";          // Visit node
    inorderTraversal(node->rightChild); // Traverse right subtree
}

// Postorder traversal method
void BinaryTree::postorderTraversal(BinaryTreeNode* node) {
    if (node == NULL) return;
    postorderTraversal(node->leftChild);   // Traverse left subtree
    postorderTraversal(node->rightChild);  // Traverse right subtree
    cout << node->data << " ";             // Visit node
}

int main() {
    BinaryTree tree;

    // Complete the tree structure here
    tree.root = new BinaryTreeNode(1);
    tree.root->leftChild = new BinaryTreeNode(2);
    tree.root->rightChild = new BinaryTreeNode(3);
    tree.root->leftChild->leftChild = new BinaryTreeNode(4);
    tree.root->leftChild->rightChild = new BinaryTreeNode(5);
    tree.root->rightChild->rightChild = new BinaryTreeNode(6);

    cout << "Tree Structure:" << endl;
    tree.print();

    cout << "\nPreorder Traversal: ";
    tree.preorderTraversal(tree.root);
    cout << endl;

    cout << "Inorder Traversal: ";
    tree.inorderTraversal(tree.root);
    cout << endl;

    cout << "Postorder Traversal: ";
    tree.postorderTraversal(tree.root);
    cout << endl;

    return 0;
}

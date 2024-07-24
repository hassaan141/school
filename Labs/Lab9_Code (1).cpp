Incomplete Code with Comments for Completion

Complete this code, so it can compile and then provide the output of the code:

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
    void printTree(BinaryTreeNode* node, int space, bool isRight);
    void print();
    void preorderTraversal(BinaryTreeNode* node);
    void inorderTraversal(BinaryTreeNode* node);
    void postorderTraversal(BinaryTreeNode* node);
};

// Constructor definition for BinaryTreeNode
BinaryTreeNode::BinaryTreeNode(int data) {
    // Complete this part
}

// Constructor definition for BinaryTree
BinaryTree::BinaryTree() {
    // Complete this part
}

int BinaryTree::depth() {
    return Height(root);
}

// Function to calculate the height of the tree
int Height(BinaryTreeNode *T) {
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
// complete this part

// Postorder traversal method
// complete this part


int main() {
    BinaryTree tree;

    // Students need to complete the tree structure here
    //Based on the given structure complete this part 
//        1
//       / \
//      2   3
//     / \   \
//    4   5   6


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

/* Code Snippets for Completion
1.	Constructor definition for BinaryTreeNode:

BinaryTreeNode::BinaryTreeNode(int data) : data(data), leftChild(NULL), rightChild(NULL) {}

2.	Constructor definition for BinaryTree:
BinaryTree::BinaryTree() : root(NULL) {}

3.	The function definition for inorderTraversal:
void BinaryTree::inorderTraversal(BinaryTreeNode* node) {
    if (node == NULL) return;
    inorderTraversal(node->leftChild);  // Traverse left subtree
    cout << node->data << " ";          // Visit node
    inorderTraversal(node->rightChild); // Traverse right subtree
}

4.	The function definition for postorderTraversal:

void BinaryTree::postorderTraversal(BinaryTreeNode* node) {
    if (node == NULL) return;
    postorderTraversal(node->leftChild);   // Traverse left subtree
    postorderTraversal(node->rightChild);  // Traverse right subtree
    cout << node->data << " ";             // Visit node
}
5.	The tree structure :
    BinaryTree tree;
    tree.root = new BinaryTreeNode(1);
    tree.root->leftChild = new BinaryTreeNode(2);
    tree.root->rightChild = new BinaryTreeNode(3);
    tree.root->leftChild->leftChild = new BinaryTreeNode(4);
    tree.root->leftChild->rightChild = new BinaryTreeNode(5);
    tree.root->rightChild->rightChild = new BinaryTreeNode(6);
 */



/* Expected Output
Tree Structure:
                    /--6

          /--3

1
          \--2
                    /--5

                    \--4
Preorder Traversal:
1 2 4 5 3 6
Inorder Traversal:
4 2 5 1 3 6
Postorder Traversal:
4 5 2 6 3 1 */


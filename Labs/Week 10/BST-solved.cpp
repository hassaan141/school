/*
Written for MTE 140 by Harish Prakash (TA). 
Topic: Binary Search Tree Operations

Solutions for Lab 10. 
I haven't coded the bonus question (vertical print), so feel free to do it yourself/refer online!
*/

#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int value) {
        key = value;
        left = right = nullptr;
    }
};

class BST {
public:
    Node* root;

    BST() {
        root = nullptr;
    }

    void insert(int key) {
        root = insertRecursive(root, key);
    }

    void deleteKey(int key) {
        root = deleteRecursive(root, key);
    }

    Node* search(int key) {
        return searchRec(root, key);
    }

    void printlevelorder() {
        if (root == nullptr) return;

        queue<Node*> q;
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

    void printTree() {
        printTreeRec(root, 0);
    }


private:
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

    Node* searchRec(Node* node, int key) {
        if (node == nullptr || node->key == key) {
            return node;
        }

        if (key < node->key) {
            return searchRec(node->left, key);
        }

        return searchRec(node->right, key);
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr)
            current = current->left;
        return current;
    }

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

    cout << "\nDeleting 20 ..." << endl;
    bst.deleteKey(20);
    bst.printTree();

    cout << "\nDeleting 30 ..." << endl;
    bst.deleteKey(30);
    bst.printTree();

    cout << "\nDeleting 50 ..." << endl;
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

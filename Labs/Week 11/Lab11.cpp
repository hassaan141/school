#include <iostream>
#include <algorithm>

struct Node {
    int key;
    Node* left;
    Node* right;
    int height;

    Node(int k) : key(k), left(nullptr), right(nullptr), height(1) {}
};

// Function to get the height of a node
int getHeight(Node* node) {
    if (node == nullptr)
        return 0;
    return node->height;
}

// Function to calculate the balance factor of a node
int getBalanceFactor(Node* node) {
    if (node == nullptr)
        return 0;
    return getHeight(node->left) - getHeight(node->right);
}

// Function to perform right rotation
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = std::max(getHeight(x->left), getHeight(x->right)) + 1;

    return x; // New root
}

// Function to perform left rotation
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = std::max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;

    return y; // New root
}

// Function to insert a key into the AVL tree
Node* insert(Node* node, int key) {
    // Standard BST insertion
    if (node == nullptr)
        return new Node(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node; // Duplicate keys not allowed

    // Update height of this ancestor node
    node->height = 1 + std::max(getHeight(node->left), getHeight(node->right));

    // Check balance factor and perform rotations if needed
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

    return node; // Return the (unchanged) node pointer
}

// Function to perform inorder traversal of AVL tree
void inorderTraversal(Node* node) {
    if (node != nullptr) {
        inorderTraversal(node->left);
        std::cout << node->key << " ";
        inorderTraversal(node->right);
    }
}

// Function to find the node with minimum key value in a given AVL tree
Node* minValueNode(Node* node) {
    Node* current = node;

    // Loop down to find the leftmost leaf
    while (current && current->left != nullptr)
        current = current->left;

    return current;
}

// Function to delete a node with given key from the AVL tree
Node* deleteNode(Node* root, int key) {
    // Base case: If the tree is empty
    if (root == nullptr)
        return root;

    // If the key to be deleted is smaller than the root's key, recursively delete from the left subtree
    if (key < root->key)
        root->left = deleteNode(root->left, key);

    // If the key to be deleted is greater than the root's key, recursively delete from the right subtree
    else if (key > root->key)
        root->right = deleteNode(root->right, key);

    // If key is same as root's key, then this is the node to be deleted
    else {
        // Node with only one child or no child
        if (root->left == nullptr || root->right == nullptr) {
            Node* temp = root->left ? root->left : root->right;

            // No child case
            if (temp == nullptr) {
                temp = root;
                root = nullptr;
            } else // One child case
                *root = *temp; // Copy the contents of the non-empty child

            delete temp;
        } else {
            // Node with two children: Get the inorder successor (smallest in the right subtree)
            Node* temp = minValueNode(root->right);

            // Copy the inorder successor's data to this node
            root->key = temp->key;

            // Delete the inorder successor
            root->right = deleteNode(root->right, temp->key);
        }
    }

    // If the tree had only one node then return
    if (root == nullptr)
        return root;

    // Update height of the current node
    root->height = 1 + std::max(getHeight(root->left), getHeight(root->right));

    // Check balance factor and perform rotations if necessary
    int balance = getBalanceFactor(root);

    if (balance > 1 && getBalanceFactor(root->left) >= 0)
        return rightRotate(root);

    if (balance > 1 && getBalanceFactor(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && getBalanceFactor(root->right) <= 0)
        return leftRotate(root);

    if (balance < -1 && getBalanceFactor(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root; // Return the (unchanged) node pointer
}

int main() {
    Node* root = nullptr;
    int keys[] = {50, 40, 70, 30, 80, 75, 65, 67, 71, 74};
    int n = sizeof(keys) / sizeof(keys[0]);

    // Insert keys into the AVL tree
    for (int i = 0; i < n; i++) {
        root = insert(root, keys[i]);
    }

    // Print inorder traversal of the AVL tree before deletion
    std::cout << "Inorder traversal of the AVL tree before deletion: ";
    inorderTraversal(root);
    std::cout << std::endl;

    // Example of deleting a node
    int keyToDelete = 65;
    root = deleteNode(root, keyToDelete);

    // Print inorder traversal of the AVL tree after deletion
    std::cout << "Inorder traversal of the AVL tree after deleting node with key " << keyToDelete << ": ";
    inorderTraversal(root);
    std::cout << std::endl;

    return 0;
}

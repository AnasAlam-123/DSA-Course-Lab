//#include<iostream>
//#include<algorithm>
//using namespace std;
//// Creating struct for node in BST
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//    int height;
//};
//// Function to get the height of the BST tree
//int getHeight(Node* root) {
//    // Checking if the tree is empty or not and if empty return height 0
//    if (root == nullptr) {
//        return 0;
//    }
//    return root->height;
//}
//// Function to calculate the balance factor of the AVL tree
//int getBalance(Node* root) {
//    // Checking if the tree is empty or not
//    if (root == nullptr) {
//        return 0;
//    }
//    // Balance factor = Height of the left subtree - Height of the right subtree
//    return getHeight(root->left) - getHeight(root->right);
//}
//// Function to perform right rotation
//Node* rightRotate(Node* root) {
//    // Storing the left child as the new root
//    Node* newRoot = root->left;
//    // Storing the right subtree of the new root
//    Node* temp = newRoot->right;
//    // Rotating
//    newRoot->right = root;
//    root->left = temp;
//
//    // Updating the height of the original root and new root
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//    newRoot->height = 1 + max(getHeight(newRoot->left), getHeight(newRoot->right));
//    return newRoot;
//}
//// Function to perform left rotation
//Node* leftRotate(Node* root) {
//    // Storing the right child as the new root
//    Node* newRoot = root->right;
//    // Storing the left subtree of the new root
//    Node* temp = newRoot->left;
//    // Rotating
//    newRoot->left = root;
//    root->right = temp;
//
//    // Updating the height of the original root and new root
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//    newRoot->height = 1 + max(getHeight(newRoot->left), getHeight(newRoot->right));
//    return newRoot;
//}
//// Function to insert the nodes in AVL tree
//Node* insertAVL(Node* root, int value) {
//    // If there is no node in the tree, make a root node
//    if (root == nullptr) {
//        return new Node{ value, nullptr, nullptr, 1 };
//    }
//    // If value is smaller than data of root, move towards the left subtree
//    if (value < root->data) {
//        root->left = insertAVL(root->left, value);
//    }
//    // If value is greater than data of root, move towards the right subtree
//    else if (value > root->data) {
//        root->right = insertAVL(root->right, value);
//    }
//    else {
//        return root;
//    }
//    // Updating height after insertion
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//
//    // Calculating the balance factor
//    int balance = getBalance(root);
//
//    // LL Case
//    if (balance > 1 && value < root->left->data) {
//        return rightRotate(root);
//    }
//    // RR Case
//    if (balance < -1 && value > root->right->data) {
//        return leftRotate(root);
//    }
//    // LR Case
//    if (balance > 1 && value > root->left->data) {
//        root->left = leftRotate(root->left);
//        return rightRotate(root);
//    }
//    // RL Case
//    if (balance < -1 && value < root->right->data) {
//        root->right = rightRotate(root->right);
//        return leftRotate(root);
//    }
//    return root;
//}
//// Function for preorder traversal
//void preorder(Node* root) {
//    // Checking if tree is empty or not
//    if (root == nullptr) {
//        return;
//    }
//    cout << root->data << " ";
//    preorder(root->left);
//    preorder(root->right);
//}
//// Function for inorder traversal
//void inorder(Node* root) {
//    // Checking if tree is empty or not
//    if (root == nullptr) {
//        return;
//    }
//    inorder(root->left);
//    cout << root->data << " ";
//    inorder(root->right);
//}
//// Funnction to check that the tree is balanced or not
//bool isBalanced(Node* root) {
//    // If tree is empty
//    if (root == nullptr) {
//        return true;
//    }
//    // Calculate balance of the tree
//    int balance = getBalance(root);
//    if (balance < -1 || balance > 1) {
//        return false;
//    }
//    int expectedHeight = 1 + max(getHeight(root->left), getHeight(root->right));
//
//    if (root->height != expectedHeight) {
//        return false;
//    }
//    return isBalanced(root->left) && isBalanced(root->right);
//}
//
//// Function to find the minimum value of a node in AVL
//Node* findMinimum(Node* root) {
//    // Checking if the tree is empty or not
//    if (root == nullptr) {
//        return nullptr;
//    }
//    // Moving to the smallest node in the tree
//    while (root->left != nullptr) {
//        root = root->left;
//    }
//    return root;
//}
//
//// Function to delete the node of AVL tree using value
//Node* deleteAVL(Node* root, int value) {
//    // Checking if the tree is empty or not
//    if (root == nullptr) {
//        return nullptr;
//    }
//    // If the value is smaller than the root's data, then it search in left subtree
//    if (value < root->data) {
//        root->left = deleteAVL(root->left, value);
//    }
//    // If the value is greater than the root's data, then it search in right subtree
//    else if (value > root->data) {
//        root->right = deleteAVL(root->right, value);
//    }
//    else {
//        // Node has zero or one child
//        if (root->left == nullptr || root->right == nullptr) {
//            Node* temp;
//            // Select the existing child, if any
//            if (root->left != nullptr) {
//                temp = root->left;
//            }
//            else {
//                temp = root->right;
//            }
//            // Node has no children
//            if (temp == nullptr) {
//                delete root;
//                return nullptr;
//            }
//            // Node has one child
//            else {
//                Node* oldRoot = root;
//                root = temp;
//                delete oldRoot;
//            }
//        }
//        // Node has two children
//        else {
//            // Finding the inorder successor
//            Node* successor = findMinimum(root->right);
//            // Replacing current node's value with successor's value
//            root->data = successor->data;
//            // Delete the original successor node
//            root->right = deleteAVL(root->right, successor->data);
//        }
//    }
//
//    // Checking if tree is empty or not
//    if (root == nullptr) {
//        return nullptr;
//    }
//
//    // Updating the height of the current node
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//
//    // Calculating the balance factor
//    int balance = getBalance(root);
//
//    // LL case
//    if (balance > 1 && getBalance(root->left) >= 0) {
//        return rightRotate(root);
//    }
//
//    // RR case
//    if (balance < -1 && getBalance(root->right) <= 0) {
//        return leftRotate(root);
//    }
//
//    // LR case
//    if (balance > 1 && getBalance(root->left) < 0) {
//        root->left = leftRotate(root->left);
//        return rightRotate(root);
//    }
//
//    // RL case
//    if (balance < -1 && getBalance(root->right) > 0) {
//        root->right = rightRotate(root->right);
//        return leftRotate(root);
//    }
//    return root;
//}
//
//// Function to display each node's data, height and balance factor
//void displayDetails(Node* root) {
//    // Checking if tree is empty or not
//    if (root == nullptr) {
//        return;
//    }
//    // Displaying left subtree first
//    displayDetails(root->left);
//
//    // Displaying current node's information
//    cout << "Value: " << root->data << " | Height: " << root->height
//         << " | Balance Factor: " << getBalance(root) << endl;
//
//    // Displaying right subtree
//    displayDetails(root->right);
//}
//
//// Function to release all the remaining nodes
//void deleteTree(Node* root) {
//    // Checking if the tree is empty or not
//    if (root == nullptr) {
//        return;
//    }
//    deleteTree(root->left);
//    deleteTree(root->right);
//    delete root;
//}
//
//int main() {
//    // Creating an empty AVL tree
//    Node* root = nullptr;
//
//    // Values to insert
//    int values[] = { 30, 20, 40, 10, 25, 50, 5 };
//
//    // Insert values into the AVL tree
//    for (int value : values) {
//        root = insertAVL(root, value);
//    }
//
//    cout << "Initial AVL Tree" << endl;
//    // Preorder and inorder traversal
//    cout << "Preorder: ";
//    preorder(root);
//    cout << "\nInorder: ";
//    inorder(root);
//
//    cout << "\n\nNode Details:\n";
//    displayDetails(root);
//
//    // Deleting node having value 50
//    cout << "\n\nAfter deleting 50" << endl;
//    root = deleteAVL(root, 50);
//    cout << "Preorder: ";
//    preorder(root);
//    cout << "\nInorder: ";
//    inorder(root);
//    cout << "\n\nNode Details:\n";
//    displayDetails(root);
//
//    // Deleting node having value 40
//    cout << "\n\nAfter deleting 40" << endl;
//    root = deleteAVL(root, 40);
//    cout << "Preorder: ";
//    preorder(root);
//    cout << "\nInorder: ";
//    inorder(root);
//    cout << "\n\nNode Details:\n";
//    displayDetails(root);
//
//    // Deleting missing node
//    cout << "\n\nDeleting missing value 100" << endl;
//    root = deleteAVL(root, 100);
//    cout << "Inorder: ";
//    inorder(root);
//
//    // Deleting from an empty tree
//    cout << "\n\nDeleting from an empty tree" << endl;
//
//    Node* emptyTree = nullptr;
//    emptyTree = deleteAVL(emptyTree, 10);
//
//    cout << "Result: " << (emptyTree == nullptr ? "nullptr" : "Not nullptr");
//
//    // Deleting the only node
//    cout << "\n\nDeleting the only node" << endl;
//
//    Node* singleNode = nullptr;
//    singleNode = insertAVL(singleNode, 25);
//    singleNode = deleteAVL(singleNode, 25);
//
//    cout << "Result: " << (singleNode == nullptr ? "nullptr" : "Not nullptr");
//
//    // Heavy child has balance factor 0
//    cout << "\n\nTesting heavy child BF = 0" << endl;
//
//    Node* testTree = nullptr;
//
//    int testValues[] = { 4, 2, 5, 1, 3 };
//
//    for (int value : testValues) {
//        testTree = insertAVL(testTree, value);
//    }
//
//    // Delete 5 to make node 4 unbalanced
//    testTree = deleteAVL(testTree, 5);
//
//    cout << "Preorder: ";
//    preorder(testTree);
//    cout << "\nInorder: ";
//    inorder(testTree);
//    cout << "\n\nNode Details:\n";
//    displayDetails(testTree);
//    cout << "\nBalanced: " << (isBalanced(testTree) ? "Yes" : "No");
//    cout << endl;
//
//    // Releasing all the remaining nodes
//    deleteTree(root);
//    root = nullptr;
//    deleteTree(singleNode);
//    singleNode = nullptr;
//    deleteTree(testTree);
//    testTree = nullptr;
//    return 0;
//}
//
//// A single rotation is appropriate when the heavy child has a balance 
//// factor of 0 because its left and right subtrees have equal heights, 
//// and after rotation it is not leaning in the other direction, therefore, 
//// we do not need double rotation.
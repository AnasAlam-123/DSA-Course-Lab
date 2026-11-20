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
//        return new Node{value, nullptr, nullptr, 1};
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
//
//    return isBalanced(root->left) && isBalanced(root->right);
//}
//
//// Function to release all the remaining nodes
//void deleteTree(Node* root) {
//    // Checking if the node is empty or not
//    if (root == nullptr) {
//        return;
//    }
//    deleteTree(root->left);
//    deleteTree(root->right);
//    delete root;
//}
//
//int main() {
//    // Sequences
//    int sequences[4][3] = {
//        {30, 20, 10}, 
//        {10, 20, 30},
//        {30, 10, 20},
//        {10, 30, 20}
//    };
//    // 4 sequences
//    for (int i = 0; i < 4; i++) {
//        Node* root = nullptr;
//        cout << "\nSequence " << i + 1 << ": ";
//        // Inserting values
//        for (int j = 0; j < 3; j++) {
//            root = insertAVL(root, sequences[i][j]);
//            cout << sequences[i][j] << " ";
//        }
//        // Displaying of the tree
//        cout << "\nPreorder: ";
//        preorder(root);
//        cout << "\nInorder: ";
//        inorder(root);
//
//        // Checking balance of the tree
//        cout << "\nBalanced: ";
//        if (isBalanced(root)) {
//            cout << "Yes";
//        }
//        else {
//            cout << "No";
//        }
//        cout << "\n---------------------\n";
//        // Releasing all the remaining nodes of the current tree
//        deleteTree(root);
//        root = nullptr;
//    }
//	return 0;
//}
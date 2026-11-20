#include<iostream>
using namespace std;
// Creating struct for a binary tree node
struct Node {
	int data;
	Node* left;
	Node* right;
};
// Function to find the minimum value of a node in a BST
Node* findMinimum(Node* root) {
	// Checking if the tree is empty or not
	if (root == nullptr) {
		return nullptr;
	}
	// Moving to the smallest node in the tree
	while (root->left != nullptr) {
		root = root->left;
	}
	return root;
}
// Function to delete the BST node using its value
Node* deleteNode(Node* root, int value) {
	// Checking if the tree is empty or not
	if (root == nullptr) {
		return root;
	}
	// If the value is smaller than the root's data, then it search in left subtree
	if (value < root->data) {
		root->left = deleteNode(root->left, value);
	}
	// If the value is greater than the root's data, then it search in right subtree
	else if (value > root->data) {
		root->right = deleteNode(root->right, value);
	}
	else {
		// If node has no children
		if (root->left == nullptr && root->right == nullptr) {
			delete root;
			return nullptr;
		}
		// If node has only right child
		else if (root->left == nullptr) {
			Node* temp = nullptr;
			temp = root->right;
			delete root;
			return temp;
		}
		// If node has only left child
		else if (root->right == nullptr) {
			Node* temp = nullptr;
			temp = root->left;
			delete root;
			return temp;
		}
		else {
			// Finding the inorder successor
			Node* successor = findMinimum(root->right);
			// Replacing the value of the node to be deleted with its inorder successor
			root->data = successor->data;
			// Delete inorder successor node
			root->right = deleteNode(root->right, successor->data);
		}
	}
	return root;
}
// Function for inorder traversal
void inorder(Node* root) {
	// Checking if tree is empty or not
	if (root == nullptr) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
// Function to insert the nodes in the binary tree
Node* insertNode(Node* root, int value) {
	// If there is no node, make a root node
	if (root == nullptr) {
		Node* n = new Node{value, nullptr, nullptr};
		return n;
	}
	// If value is smaller than the node, then insert it at the left of that node
	if (value < root->data) {
		root->left = insertNode(root->left, value);
	}
	// If value is greater than the node, then insert it at the right of that node
	else if (value > root->data) {
		root->right = insertNode(root->right, value);
	}
	return root;
}

// Function to release all remaining nodes
void deleteTree(Node* root) {
	// Checking if the tree is empty or not
	if (root == nullptr) {
		return;
	}
	deleteTree(root->left);
	deleteTree(root->right);
	delete root;
}

int main() {
	// Creating the root of the BST
	Node* root = nullptr;
	// Inserting all the nodes in the tree
	int values[] = {50, 30, 70, 20, 40, 60, 80, 65};
	for (int value : values) {
		root = insertNode(root, value);
	}
	// Initial BST
	cout << "Initial BST: ";
	inorder(root);
	// Deleting different nodes
	root = deleteNode(root, 20);
	cout << "\nAfter deleting 20: ";
	inorder(root);
	root = deleteNode(root, 60);
	cout << "\nAfter deleting 60: ";
	inorder(root);
	root = deleteNode(root, 50);
	cout << "\nAfter deleting 50: ";
	inorder(root);
	// Deleting a missing node
	root = deleteNode(root, 100);
	cout << "\nAfter deleting missing node 100: ";
	inorder(root);

	// Deleting the node from an empty tree
	Node* emptyTree = nullptr;
	emptyTree = deleteNode(emptyTree, 10);
	cout << "\nDeleting from empty tree: " << (emptyTree == nullptr ? "nullptr" : "Not nullptr");

	// Deleting a node from the tree containing only one node
	Node* singleNode = insertNode(nullptr, 25);
	singleNode = deleteNode(singleNode, 25);
	cout << "\nDeleting only node: " << (singleNode == nullptr ? "nullptr" : "Not nullptr");
	cout << endl;

	// Releasing all remaining nodes
	deleteTree(root);
	root = nullptr;
	deleteTree(singleNode);
	singleNode = nullptr;
	deleteTree(emptyTree);
	emptyTree = nullptr;
	return 0;
}
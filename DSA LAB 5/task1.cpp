//#include<iostream>
//using namespace std;
//// Creating class Node
//class Node {
//	// Public attributes for the node
//public:
//	int data;
//	Node* prev;
//	Node* next;
//	// Public methods for the node
//public:
//	Node(int value);
//	void AddNode(int value);
//	void PrintForward();
//	void PrintReverse();
//	void ClearList();
//};
//// Initiating the pointers to null pointer
//Node* head = nullptr;
//Node* tail = nullptr;
//Node* curr = nullptr;
//// Creating the Node constructor
//Node::Node(int value) {
//	data = value;
//	prev = nullptr;
//	next = nullptr;
//}
//// Function to add node using tail
//void Node::AddNode(int value) {
//	Node* n = new Node(value);
//	if (head == nullptr) {
//		head = n;
//		tail = n;
//	}
//	else {
//		tail->next = n;
//		n->prev = tail;
//		tail = n;
//	}
//}
//// Function to print linked list from head
//void Node::PrintForward() {
//	curr = head;
//	if (head == nullptr) {
//		cout << "List is empty." << endl;
//		return;
//	}
//	while (curr != nullptr) {
//		cout << curr->data << " <=> ";
//		curr = curr->next;
//	}
//	cout << "NULL" << endl;
//}
//// Function to print linked list from tail
//void Node::PrintReverse() {
//	curr = tail;
//	if (tail == nullptr) {
//		cout << "List is empty." << endl;
//		return;
//	}
//	while (curr != nullptr) {
//		cout << curr->data << " <=> ";
//		curr = curr->prev;
//	}
//	cout << "NULL" << endl;
//}
//// Function to deallocate the memory
//void Node::ClearList() {
//	curr = head;
//	while (curr != nullptr) {
//		Node* temp = curr;
//		curr = curr->next;
//		delete temp;
//	}
//	head = nullptr;
//	tail = nullptr;
//	cout << "Clearing the memory successfully." << endl;
//}
//int main() {
//	// Creating the object of Node class
//	Node node(0);
//	// Adding nodes in the list
//	node.AddNode(10);
//	node.AddNode(20);
//	node.AddNode(30);
//	// Printing the list from the head
//	cout << "Printing the list from head." << endl;
//	node.PrintForward();
//	// Printing the list from the tail
//	cout << "Printing the list from tail." << endl;
//	node.PrintReverse();
//	// Deallocating the memory
//	node.ClearList();
//	return 0;
//}
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
//	void InsertBefore(int position, int value);
//	void DeleteNode(int value);
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
//// Function to isert value at the given position
//void Node::InsertBefore(int position, int value) {
//	if (position < 1 || head == nullptr) {
//		cout << "Invalid position." << endl;
//		return;
//	}
//	Node* curr = head;
//	int currPos = 1;
//	// Finding the node at the given position
//	while (curr != nullptr && currPos < position) {
//		curr = curr->next;
//		currPos++;
//	}
//	// Validating the position
//	if (curr == nullptr) {
//		cout << "Invalid position." << endl;
//		return;
//	}
//	// Creating the new node after validating the position
//	Node* n = new Node(value);
//	n->next = curr;
//	n->prev = curr->prev;
//	if (curr->prev != nullptr) {
//		curr->prev->next = n;
//	}
//	else {
//		head = n;
//	}
//	curr->prev = n;
//	cout << value << " inserted successfully." << endl;
//}
//// Function to delete the first matching value
//void Node::DeleteNode(int value) {
//	Node* curr = head;
//	// Find the first matching node
//	while (curr != nullptr && curr->data != value) {
//		curr = curr->next;
//	}
//	if (curr == nullptr) {
//		cout << "Value not found." << endl;
//		return;
//	}
//	// Update the previous node or head
//	if (curr->prev != nullptr) {
//		curr->prev->next = curr->next;
//	}
//	else {
//		head = curr->next;
//	}
//
//	// Update the next node or tail
//	if (curr->next != nullptr) {
//		curr->next->prev = curr->prev;
//	}
//	else {
//		tail = curr->prev;
//	}
//
//	delete curr;
//
//	cout << value << " deleted successfully." << endl;
//}
//
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
//
//	// Printing the list from the head
//	cout << "Printing the list from head." << endl;
//	node.PrintForward();
//	// Printing the list from the tail
//	cout << "Printing the list from tail." << endl;
//	node.PrintReverse();
//
//	// Inserting the value at the position
//	cout << "\nInsert 15 before position 2:" << endl;
//	node.InsertBefore(2, 15);
//	cout << "Printing the list from head." << endl;
//	node.PrintForward();
//	cout << "Printing the list from tail." << endl;
//	node.PrintReverse();
//
//	// Deleting the value
//	cout << "\nDelete node of value 20:" << endl;
//	node.DeleteNode(20);
//	cout << "Printing the list from head." << endl;
//	node.PrintForward();
//	cout << "Printing the list from tail." << endl;
//	node.PrintReverse();
//
//	// Deallocating the memory
//	node.ClearList();
//	return 0;
//}
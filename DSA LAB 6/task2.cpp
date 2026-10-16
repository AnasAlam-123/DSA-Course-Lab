//#include<iostream>
//using namespace std;
//// Creating the structure of Node
//struct Node {
//	int data;
//	Node* next;
//};
//Node* top = nullptr;
//// Function to push values in stack
//void push(int value) {
//	Node* n = new Node;
//	n->data = value;
//	n->next = top;
//	top = n;
//	cout << value << " pushed into stack." << endl;
//}
//// Function to pop top value from the stack
//void pop() {
//	// Checking that the stack is empty or not
//	if (top == nullptr) {
//		cout << "Stack is empty." << endl;
//	}
//	else {
//		Node* n = new Node;
//		n = top;
//		cout << "Removed value: " << top->data << endl;
//		top = top->next;
//		delete n;
//	}
//}
//
//// Function to peek the top value of the stack
//void peek() {
//	// Checking that the stack is empty or not
//	if (top == nullptr) {
//		cout << "Stack is empty." << endl;
//	}
//	else {
//		cout << "Top value is: " << top->data << endl;
//	}
//}
//
//// Function to dispaly the stack from top to bottom
//void display(){
//	// Checking that the stack is empty or not
//	if (top == nullptr) {
//		cout << "Stack is empty." << endl;
//	}
//	else {
//		Node* curr = nullptr;
//		curr = top;
//		cout << "Stack elements (top to bottom): ";
//		while (curr != nullptr) {
//			cout << curr->data << " ";
//			curr = curr->next;
//		}
//		cout << endl;
//	}
//}
//// Function to delete all the nodes of stack
//void clearStack() {
//	while (top != nullptr) {
//		Node* temp = top;
//		top = top->next;
//		delete temp;
//	}
//	cout << "All nodes released." << endl;
//}
//
//int main() {
//	// Pushing three values
//	push(5);
//	push(15);
//	push(25);
//	// Displaying the stack
//	display();
//	// Removing the top node
//	pop();
//	// Viewing the top value
//	peek();
//
//	// Testing pop if stack is empty
//	cout << "\nTesting empty pop:" << endl;
//	clearStack();  // Releasing remaining nodes
//	pop();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//// Declaring array items of size 5 and initiating top to -1
//int items[5];
//int top = -1;
//
//// Function to check that stack is empty or not
//bool isEmpty() {
//	if (top == -1) {
//		return true;
//	}
//	else {
//		return false;
//	}	
//}
//
//// Function to push values into the stack
//void push(int value) {
//	// Checking that the stack is already full or not
//	if (top == 4) {
//		cout << "Stack is full. Nothing can be pushed more." << endl;
//	}
//	else {
//		top++;
//		items[top] = value;
//		cout << value << " pushed into stack." << endl;
//	}
//}
//
//// Function to pop the top value of the stack
//void pop() {
//	// Checking that the stack is empty or not
//	if (isEmpty()) {
//		cout << "Stack is empty!" << endl;
//	}
//	else {
//		cout << "Removed value: " << items[top] << endl; // Displaying the removed value
//		top--;
//	}
//}
//
//// Function to peek the stack
//void peek() {
//	// Checking that the stack is empty or not
//	if (isEmpty()) {
//		cout << "Stack is empty!" << endl;
//	}
//	else {
//		cout << "Top value: " << items[top] << endl; // Prints top value of stack
//	}
//}
//
//// Displaying the values of stack from top to bottom
//void display() {
//	// Checking that the stack is empty or not
//	if (isEmpty()) {
//		cout << "Stack is empty!" << endl;
//	}
//	else {
//		cout << "Stack elements (top to bottom): ";
//		for (int i = top; i >= 0; i--) {
//			cout << items[i] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	// Pushing three values
//	push(10);
//	push(20);
//	push(30);
//	// Displaying the stack
//	display();
//	// Removing the top value
//	pop();
//	// Viewing the top value
//	peek();
//
//	// Inserting in stack when it is full
//	cout << "\nStack overflow: " << endl;
//	push(40);
//	push(50);
//	push(60);
//	push(70);  // Sixth insertion attempt when full
//	// Displaying the stack
//	display();
//
//	// Removing all remaining values
//	cout << "\nRemoving all values:" << endl;
//	while (top != -1) {
//		pop();
//	}
//
//	// Testing popping and peeking when empty
//	cout << "\nStack underflow:" << endl;
//	pop();
//	peek();
//
//	return 0;
//}
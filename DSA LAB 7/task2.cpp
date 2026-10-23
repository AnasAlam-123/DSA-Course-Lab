//#include<iostream>
//using namespace std;
//// Creating the LinkedQueue class
//class LinkedQueue {
//private:
//	// Creating the struct node and declaring the data and next of node
//	struct node {
//		int data;
//		node* next;
//	};
//	// Pointers pointing to front and rear
//	node* front;
//	node* rear;
//public:
//	LinkedQueue();
//	bool isEmpty();
//	void Enqueue(int value);
//	void Dequeue();
//	void Peek();
//	void Display();
//	void ClearQueue();
//};
//// Initiallizing front and rear to nullptr
//LinkedQueue::LinkedQueue() {
//	front = nullptr;
//	rear = nullptr;
//}
//// Method to check that the queue is empty or not
//bool LinkedQueue::isEmpty() {
//	return front == nullptr;
//}
//// Method to insert the elements in the queue
//void LinkedQueue::Enqueue(int value) {
//	node* n = new node();
//	n->data = value;
//	n->next = nullptr;
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		front = n;
//		rear = n;
//	}
//	else {
//		rear->next = n; 
//		rear = n; 
//	}
//	// Printing the inserted value
//	cout << value << " is inserted." << endl;
//}
//// Method to remove the elements from the queue
//void LinkedQueue::Dequeue() {
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		cout << "Queue is empty!!!" << endl;
//		return;
//	}
//	// Removing the value and printing the removed value
//	node* temp = nullptr;
//	temp = front;
//	cout << "Dequeued: " << temp->data << "\n";
//	front = front->next;
//	if (front == nullptr) {
//		rear = nullptr;
//	}
//	delete temp;
//}
//// Method to peek the first element of the queue
//void LinkedQueue::Peek() {
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		cout << "Queue is empty!!!" << endl;
//		return;
//	}
//	cout << "First element: " << front->data << endl;
//}
//// Method to display the queue from front to rear
//void LinkedQueue::Display() {
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		cout << "Queue is empty!!!" << endl;
//		return;
//	}
//	cout << "Queue (from front to rear): ";
//	node* temp = nullptr;
//	temp = front;
//	while (temp != nullptr) {
//		cout << temp->data << " ";
//		temp = temp->next;
//	}
//	cout << endl;
//}
//// Method to clear the queue
//void LinkedQueue::ClearQueue(){
//	while (front != nullptr) {
//		node* temp = front;
//		front = front->next;
//		delete temp;
//	}
//	rear = nullptr;
//	cout << "All nodes are cleared." << endl;
//}
//int main() {
//	// Creating the object of LinkedQueue
//	LinkedQueue q;
//	// Inserting 3 elements
//	q.Enqueue(10);
//	q.Enqueue(20);
//	q.Enqueue(30);
//	// Removing 1 elements
//	q.Dequeue();
//	// Displaying the queue
//	q.Display();
//	// Peeking the first element of the queue
//	q.Peek();
//	// Removing 2 more elements
//	q.Dequeue();
//	q.Dequeue();
//	q.Display();
//	// Inserting 2 elements again
//	q.Enqueue(40);
//	q.Enqueue(50);
//	q.Display();
//	q.Peek();
//	// Clearing all the queue
//	q.ClearQueue();
//	q.Display();
//	return 0;
//}
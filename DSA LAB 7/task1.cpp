//#include<iostream>
//using namespace std;
//// Creating the ArrayQueue class
//class ArrayQueue {
//private:
//	// Declaring array of size 5, front and rear
//	static const int SIZE = 5;
//	int array[SIZE];
//	int front;
//	int rear;
//public:
//	ArrayQueue();
//	bool isEmpty();
//	bool isFull();
//	void Enqueue(int value);
//	void Dequeue();
//	void Peek();
//	void Display();
//};
//// Initiallizing front and rear to -1
//ArrayQueue::ArrayQueue() {
//	front = -1;
//	rear = -1;
//}
//// Method to check that the queue is empty or not
//bool ArrayQueue::isEmpty() {
//	return front == -1;
//}
//// Method to check that the queue is full or not
//bool ArrayQueue::isFull() {
//	return rear == SIZE - 1;
//}
//// Method to insert the values into the queue
//void ArrayQueue::Enqueue(int value) {
//	// Checking that the queue is full or not
//	if (isFull()) {
//		cout << "Queue is already full." << endl;
//		return;
//	}
//	// If the queue has only one element
//	if (front == -1) {
//		front = 0;
//	}
//	rear++;
//	array[rear] = value;
//	// Printing the value that is entered
//	cout << value << " is inserted." << endl;
//}
//// Method to remove the values from the queue
//void ArrayQueue::Dequeue() {
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		cout << "Queue is already empty!!!" << endl;
//		return;
//	}
//	// Storing the value to remove
//	int dequeuedValue = array[front];
//	// Resetting the front and rear to -1 if the queue has only one element
//	if (front == rear) {
//		front = -1;
//		rear = -1;
//	}
//	else {
//		front++;
//	}
//	// Printing the value that is removed
//	cout << "Dequeued: " << dequeuedValue << endl;
//}
//void ArrayQueue::Peek() {
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		cout << "Queue is already empty!!!" << endl;
//		return;
//	}
//	// Peeking the first value of the queue
//	cout << "First value: " << array[front] << endl;
//}
//void ArrayQueue::Display() {
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		cout << "Queue is already empty!!!" << endl;
//		return;
//	}
//	// Displaying the queue from front to rear
//	cout << "Queue (from front to rear): " << endl;
//	for (int i = front; i <= rear; i++) {
//		cout << array[i] << " ";
//	}
//	cout << endl;
//}
//int main() {
//	// Creating object of ArrayQueue
//	ArrayQueue q;
//	// Inserting 5 elements to rear
//	q.Enqueue(10);
//	q.Enqueue(20);
//	q.Enqueue(30);
//	q.Enqueue(40);
//	q.Enqueue(50);
//	// Removing 2 elements from front
//	q.Dequeue();
//	q.Dequeue();
//	// Inserting 1 element again
//	q.Enqueue(60);
//	q.Display();
//	q.Peek();
//	// Removing 3 elements
//	q.Dequeue();
//	q.Dequeue();
//	q.Dequeue();
//	// Removing an element again
//	q.Dequeue();
//	// Inserting 1 element
//	q.Enqueue(70);
//	q.Display();
//	q.Peek();
//	return 0;
//}
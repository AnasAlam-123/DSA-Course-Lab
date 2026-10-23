//#include<iostream>
//using namespace std;
//// Creating the CircularQueue class
//class CircularQueue {
//private:
//	// Declaring array of size 5, front and rear
//	static const int SIZE = 5;
//	int array[SIZE];
//	int front;
//	int rear;
//public:
//	CircularQueue();
//	bool isEmpty();
//	bool isFull();
//	void Enqueue(int value);
//	void Dequeue();
//	void Peek();
//	void Display();
//};
//// Initiallizing front and rear to -1
//CircularQueue::CircularQueue() {
//	front = -1;
//	rear = -1;
//}
//// Method to check that the queue is empty or not
//bool CircularQueue::isEmpty() {
//	return front == -1;
//}
//// Method to check that the queue is full or not
//bool CircularQueue::isFull() {
//	return (rear + 1) % SIZE == front;
//}
//// Method to insert the values into the queue
//void CircularQueue::Enqueue(int value) {
//	// Checking that the queue is full or not
//	if (isFull()) {
//		cout << "Queue is already full." << endl;
//		return;
//	}
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		front = 0;
//		rear = 0;
//	}
//	else {
//		rear = (rear + 1) % SIZE;
//	}
//	array[rear] = value;
//	// Printing the inserted value
//	cout << value << " is inserted." << endl;
//}
//// Method to remove the values from the queue
//void CircularQueue::Dequeue() {
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		cout << "Queue is already empty!!!" << endl;
//		return;
//	}
//	int dequeuedValue = array[front];
//	if (front == rear) {
//		front = -1;
//		rear = -1;
//	}
//	else {
//		front = (front + 1) % SIZE;
//	}
//	// Printing the removed value
//	cout << "Dequeued: " << dequeuedValue << endl;
//}
// // Method to peek the queue
//void CircularQueue::Peek() {
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		cout << "Queue is already empty!!!" << endl;
//		return;
//	}
//	// Printing the first value in the queue
//	cout << "First value: " << array[front] << endl;
//}
// // Method to display the queue
//void CircularQueue::Display() {
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		cout << "Queue is already empty!!!" << endl;
//		return;
//	}
//	int count = (rear >= front) ? (rear - front + 1) : (rear + SIZE - front + 1);
//	cout << "Queue (front -> rear): ";
//	int i = front;
//	for (int j = 0; j < count; j++) {
//		cout << array[i] << " ";
//		i = (i + 1) % SIZE;
//	}
//	// Printing the front and rear where pointing
//	cout << "\nFront = " << front << ", Rear = " << rear << endl;
//}
//int main() {
//	// Creating the object of the CircularQueue
//	CircularQueue q;
//	// Inserting 5 elements
//	q.Enqueue(10);
//	q.Enqueue(20);
//	q.Enqueue(30);
//	q.Enqueue(40);
//	q.Enqueue(50);
//	// Removing 2 elements
//	q.Dequeue();
//	q.Dequeue();
//	// Inserting 2 elements again
//	q.Enqueue(60);
//	q.Enqueue(70);
//	// Displaying the queue
//	q.Display();
//	// Inserting an element again
//	q.Enqueue(80);
//	q.Peek();
//	// Removing all the elements from the queue
//	q.Dequeue();
//	q.Dequeue();
//	q.Dequeue();
//	q.Dequeue();
//	q.Dequeue();
//	// Applying an additional dequeue
//	q.Dequeue();
//	q.Display();
//	// Insertingan elements into an empty queue again
//	q.Enqueue(90);
//	q.Display();
//	q.Peek();
//	return 0;
//}
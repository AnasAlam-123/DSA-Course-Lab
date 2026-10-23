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
//	void RotateTurn();
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
//// Method to peek the queue
//void CircularQueue::Peek() {
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		cout << "Queue is already empty!!!" << endl;
//		return;
//	}
//	// Printing the first value in the queue
//	cout << "First value: " << array[front] << endl;
//}
//// Method to display the queue
//void CircularQueue::Display() {
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		cout << "Queue is already empty!!!" << endl;
//		return;
//	}
//	int count = (rear >= front) ? (rear - front + 1) : (rear + SIZE - front + 1);
//	cout << "Queue (from front to rear): ";
//	int i = front;
//	for (int j = 0; j < count; j++) {
//		cout << array[i] << " ";
//		i = (i + 1) % SIZE;
//	}
//	// Printing the front and rear where pointing
//	cout << "\nFront = " << front << ", Rear = " << rear << endl;
//}
//// Method to rotate the turn that is dequeue an element and then enqueue it
//void CircularQueue::RotateTurn() {
//	// Checking that the queue is empty or not
//	if (isEmpty()) {
//		cout << "Queue is already empty!!!" << endl;
//		return;
//	}
//	// Saving the front student's ID
//	int studentID = array[front];
//	cout << "\nStudent served: " << studentID << endl;
//	// Removing the front student
//	Dequeue();
//	// Inserting the same student at the rear
//	Enqueue(studentID);
//	// Displaying the updated queue
//	cout << "Updated queue: ";
//	Display();
//}
//int main() {
//	// Creating object of CircularQueue
//	CircularQueue queue;
//	cout << "===== Initial Queue =====" << endl;
//	// Inserting the students in the queue
//	queue.Enqueue(101);
//	queue.Enqueue(102);
//	queue.Enqueue(103);
//	// Displaying the queue
//	queue.Display();
//	// Running five turns
//	cout << "\n===== Five Turns =====" << endl;
//	for (int i = 1; i <= 5; i++) {
//		cout << "\nTurn " << i << ":";
//		queue.RotateTurn();
//	}
//	// Testing an empty queue
//	cout << "\n===== Empty Queue Test =====" << endl;
//
//	CircularQueue emptyQueue;
//	emptyQueue.RotateTurn();
//
//	// Testing a queue containing one student
//	cout << "\n===== One Student Test =====" << endl;
//
//	CircularQueue singleQueue;
//	singleQueue.Enqueue(201);
//	// Before rotating
//	cout << "Before turn:" << endl;
//	singleQueue.Display();
//	// Rotating the turn
//	singleQueue.RotateTurn();
//	// After rotating
//	cout << "After turn:" << endl;
//	singleQueue.Display();
//	return 0;
//}
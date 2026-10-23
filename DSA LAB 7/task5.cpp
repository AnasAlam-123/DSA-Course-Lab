//#include <iostream>
//using namespace std;
//// Creating the ArrayDeque class
//class ArrayDeque {
//private:
//    // Declaring array of size 5, front and rear
//    static const int SIZE = 5;
//    int arr[SIZE];
//    int front;
//    int rear;
//public:
//    ArrayDeque();
//    bool isEmpty();
//    bool isFull();
//    void InsertFront(int value);
//    void InsertRear(int value);
//    void DeleteFront();
//    void DeleteRear();
//    void Display();
//};
//// Initiallizing front and rear to -1
//ArrayDeque::ArrayDeque() {
//    front = -1;
//    rear = -1;
//}
//// Method to check that the queue is empty or not
//bool ArrayDeque::isEmpty() {
//    return front == -1;
//}
//// Method to check that the queue is full or not
//bool ArrayDeque::isFull() {
//    return (rear + 1) % SIZE == front;
//}
//// Method to insert values from front
//void ArrayDeque::InsertFront(int value) {
//    // Checking that the queue is full or not
//    if (isFull()) {
//        cout << "Deque is already full." << endl;
//        return;
//    }
//    // Checking that the queue is empty or not
//    if (isEmpty()) {
//        front = 0;
//        rear = 0;
//    }
//    else {
//        front = (front + SIZE - 1) % SIZE;
//    }
//    arr[front] = value;
//    cout << "Inserted " << value << " at front." << endl;
//}
//// Method to insert values to rear
//void ArrayDeque::InsertRear(int value) {
//    // Checking that the queue is full or not
//    if (isFull()) {
//        cout << "Deque is already full." << endl;
//        return;
//    }
//    // Checking that the queue is empty or not
//    if (isEmpty()) {
//        front = 0;
//        rear = 0;
//    }
//    else {
//        rear = (rear + 1) % SIZE;
//    }
//    arr[rear] = value;
//    cout << "Inserted " << value << " at rear." << endl;
//}
//// Method to remove values from front
//void ArrayDeque::DeleteFront() {
//    // Checking that the queue is empty or not
//    if (isEmpty()) {
//        cout << "Deque is already empty." << endl;
//        return;
//    }
//    cout << "Deleted " << arr[front] << " from front." << endl;
//    if (front == rear) {
//        front = -1;
//        rear = -1;
//    }
//    else {
//        front = (front + 1) % SIZE;
//    }
//}
//// Method to remove values to rear
//void ArrayDeque::DeleteRear() {
//    // Checking that the queue is empty or not
//    if (isEmpty()) {
//        cout << "Deque is already empty." << endl;
//        return;
//    }
//    cout << "Deleted " << arr[rear] << " from rear." << endl;
//    if (front == rear) {
//        front = -1;
//        rear = -1;
//    }
//    else {
//        rear = (rear + SIZE - 1) % SIZE;
//    }
//}
//// Method to display the queue
//void ArrayDeque::Display() {
//    // Checking that the queue is empty or not
//    if (isEmpty()) {
//        cout << "Deque is empty." << endl;
//        return;
//    }
//    int count = (rear >= front) ? (rear - front + 1) : (rear + SIZE - front + 1);
//    cout << "Deque (from front to rear): ";
//    int i = front;
//    for (int k = 0; k < count; k++) {
//        cout << arr[i] << " ";
//        i = (i + 1) % SIZE;
//    }
//    cout << endl;
//}
//int main() {
//    // Creating the object of ArrayDeque
//    ArrayDeque d;
//
//    cout << "===== Main sequence =====\n";
//    d.InsertRear(20);
//    d.InsertFront(10);
//    d.InsertRear(30);
//    d.Display();
//
//    d.DeleteRear();
//    d.DeleteFront();
//    d.Display();
//
//    d.InsertFront(5);
//    d.InsertRear(30);
//    d.InsertRear(40);
//    d.InsertFront(1);
//    d.Display();
//
//    d.InsertFront(99);
//    d.InsertRear(99);
//    d.Display();
//
//    cout << "\n===== Run A: only value deleted from front =====\n";
//    ArrayDeque a;
//    a.InsertRear(7);
//    a.DeleteFront();
//    a.Display();
//    a.DeleteFront();
//    a.DeleteRear();
//
//    cout << "\n===== Run B: only value deleted from rear =====\n";
//    ArrayDeque b;
//    b.InsertFront(8);
//    b.DeleteRear();
//    b.Display();
//    b.DeleteRear();
//    b.DeleteFront();
//    return 0;
//}
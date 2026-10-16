//#include <iostream>
//using namespace std;
//// Declaring an int array items of size 5 and initiating front and rear to -1
//int items[5];
//int front = -1;
//int rear = -1;
//// Function to push the values into the queue
//void enqueue(int value) {
//    // Checking that the queue is full or not
//    if (rear == 4) {
//        cout << "Queue is full." << endl;
//    }
//    else {
//        if (front == -1) {
//            front = 0;
//        }
//        rear++;
//        items[rear] = value;
//        cout << value << " inserted into queue." << endl;
//    }
//}
//// Function to pop the values out of the queue
//void dequeue() {
//    // Checking if the queue is empty or not
//    if (front == -1) {
//        cout << "Queue is empty." << endl;
//    }
//    else {
//        cout << "Removed value: " << items[front] << endl;
//        // When queue has only one value present
//        if (front == rear) {
//            // Resetting the front and rear to -1
//            front = -1;
//            rear = -1;
//        }
//        else {
//            front++;
//        }
//    }
//}
//// Function to peek the value from the front of the queue
//void peekFront() {
//    // Checking if the queue is empty or not
//    if (front == -1) {
//        cout << "Queue is empty." << endl;
//    }
//    else {
//        cout << "Front value: " << items[front] << endl;
//    }
//}
//// Function to display all the values of the queue
//void display() {
//    // Checking if the queue is empty or not
//    if (front == -1) {
//        cout << "Queue is empty." << endl;
//    }
//    else {
//        cout << "Queue elements (front to rear): ";
//        for (int i = front; i <= rear; i++) {
//            cout << items[i] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    // Inserting three values
//    enqueue(10);
//    enqueue(20);
//    enqueue(30);
//    display();
//    // Popping one value
//    dequeue();
//    // Peeking and displaying the queue
//    peekFront();
//    display();
//
//    // Popping all remaining items
//    cout << "\nRemoving all remaining items:" << endl;
//    dequeue();
//    dequeue();
//    // Popping from an empty queue
//    cout << "\nIf queue is already empty:" << endl;
//    dequeue();
//
//    // Inserting after reset
//    cout << "\nInserting in the queue:" << endl;
//    enqueue(40);
//    peekFront();
//    display();
//    return 0;
//}
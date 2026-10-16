//#include <iostream>
//using namespace std;
//// Declaring an int array items of size 5 and initiating front and rear to -1
//int items[5];
//int front = -1;
//int rear = -1;
//// Function to push the values into the queue
//void enqueue(int value) {
//    // Checking if the queue is full or not
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
//// Function to display all the values of the queue
//void display() {
//    // Checking that the queue is empty or not
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
//    // Displaying the queue
//    display();
//
//    // Filling the remaining positions
//    enqueue(40);
//    enqueue(50);
//
//    // Insertion when queue is already full
//    enqueue(60);
//
//    // Displaying the queue
//    display();
//    return 0;
//}
#include <iostream>
using namespace std;
// Declaring an int array items of size 5 and initiating front and rear to -1
int items[5];
int front = -1;
int rear = -1;
// Function to push the values into the queue
void enqueue(int value) {
    // Checking that the queue is full or not
    if (rear == 4) {
        cout << "Queue is full. Can't add more customers" << endl;
    }
    else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        items[rear] = value;
        cout << "Customer " << value << " added successfully." << endl;
    }
}
// Function to pop the values out of the queue
void dequeue() {
    // Checking that the queue is empty or not
    if (front == -1) {
        cout << "Queue is empty. No customer to serve." << endl;
    }
    else {
        cout << "Serving customer: " << items[front] << endl;
        if (front == rear) {
            // Reset when the last customer is served
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
    }
}
// Function to peek the value from the front of the queue
void peekFront() {
    // Checking that the queue is empty or not
    if (front == -1) {
        cout << "Queue is empty. No next customer." << endl;
    }
    else {
        cout << "Next customer: " << items[front] << endl;
    }
}
// Function to display all waiting customers
void display() {
    // Checking that the queue is empty or not
    if (front == -1) {
        cout << "Queue is empty." << endl;
    }
    else {
        cout << "Waiting customers (front to rear): ";
        for (int i = front; i <= rear; i++) {
            cout << items[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Declaring choice entered by customer and token number of customer
    int choice;
    int token;
    do {
        cout << "\n===== Customer Service Queue =====" << endl;
        cout << "1. Add customer" << endl;
        cout << "2. Serve next" << endl;
        cout << "3. View next" << endl;
        cout << "4. Display queue" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        // Taking customer's choice
        if (!(cin >> choice)) {
            cout << "Invalid input. Enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        switch (choice) {
            // Adding customer in the queue by taing its token number
        case 1:
            cout << "Enter customer token number: ";
            if (cin >> token) {
                enqueue(token);
            }
            else {
                cout << "Invalid token. Enter an integer." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
            break;
            // Removing the customers when they get service
        case 2:
            dequeue();
            break;
            // Peeking the first customer from the queue
        case 3:
            peekFront();
            break;
            // Displaying the queue of customers
        case 4:
            display();
            break;
        case 5:
            cout << "Exiting customer service system." << endl;
            break;
        default:
            cout << "Invalid choice. Select 1 to 5." << endl;
        }
    } while (choice != 5);
    return 0;
}
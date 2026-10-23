#include <iostream>
using namespace std;
// Creating class LinkedDeque
class LinkedDeque {
private:
    // Creating struct node
    struct node {
        int data;
        node* next;
        node* prev;
    };
    node* front;
    node* rear;
public:
    LinkedDeque();
    bool isEmpty();
    void InsertFront(int value);
    void InsertRear(int value);
    void DeleteFront();
    void DeleteRear();
    void Display();
    void ClearDeque();
};
// Initiallizing front and rear to nullptr
LinkedDeque::LinkedDeque() {
    front = nullptr;
    rear = nullptr;
}
// Method to check that the queue is empty or not
bool LinkedDeque::isEmpty() {
    return front == nullptr;
}
// Method to insert the elements from front
void LinkedDeque::InsertFront(int value) {
    node* n = new node;
    n->data = value;
    n->prev = nullptr;
    n->next = front;
    if (isEmpty()) {
        rear = n;
    }
    else {
        front->prev = n;
    }
    front = n;
    cout << "Inserted " << value << " at front." << endl;
}
// Method to insert the elements to rear
void LinkedDeque::InsertRear(int value) {
    node* n = new node;
    n->data = value;
    n->next = nullptr;
    n->prev = rear;
    if (isEmpty()) {
        front = n;
    }
    else {
        rear->next = n;
    }
    rear = n;
    cout << "Inserted " << value << " at rear\n";
}
// Method to remove the elements from front
void LinkedDeque::DeleteFront() {
    if (isEmpty()) {
        cout << "Deque is already empty." << endl;
        return;
    }
    node* temp = nullptr;
    temp = front;
    cout << "Deleted " << temp->data << " from front." << endl;
    front = front->next;
    if (front == nullptr) {
        rear = nullptr;
    }
    else {
        front->prev = nullptr;
    }
    delete temp;
}
// Method to remove the elements to rear
void LinkedDeque::DeleteRear() {
    if (isEmpty()) {
        cout << "Deque is already empty." << endl;
        return;
    }
    node* temp = nullptr;
    temp = rear;
    cout << "Deleted " << temp->data << " from rear\n";
    rear = rear->prev;
    if (rear == nullptr) {
        front = nullptr;
    }
    else {
        rear->next = nullptr;
    }
    delete temp;
}
// Method to display the deque
void LinkedDeque::Display() {
    if (isEmpty()) {
        cout << "Deque is empty." << endl;
        return;
    }
    cout << "Deque (from front to rear): ";
    node* temp = nullptr;
    temp = front;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Method to clear all the elements
void LinkedDeque::ClearDeque() {
    while (front != nullptr) {
        node* temp = nullptr;
        temp = front;
        front = front->next;
        delete temp;
    }
    rear = nullptr;
}
int main() {
    // Creating the object of LinkedDeque
    LinkedDeque dq;
    // Declaring the choice and value
    int choice, value;
    do {
        cout << "\n===== Linked Deque Menu =====\n";
        cout << "1. Insert at front" << endl;
        cout << "2. Insert at rear" << endl;
        cout << "3. Delete from front" << endl;
        cout << "4. Delete from rear" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        // Choice entered by user
        if (!(cin >> choice)) {
            break;
        }
        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            dq.InsertFront(value);
            break;
        case 2:
            cout << "Enter value: "; 
            cin >> value;
            dq.InsertRear(value);
            break;
        case 3: 
            dq.DeleteFront(); 
            break;
        case 4: 
            dq.DeleteRear();  
            break;
        case 5: 
            dq.Display();
            break;
        case 6: 
            cout << "Exiting..." << endl; 
            break;
        default: 
            cout << "Invalid choice. Please enter 1-6." << endl;
        }
    } while (choice != 6);
    // Releasing all the elements
    dq.ClearDeque();
    return 0;
}
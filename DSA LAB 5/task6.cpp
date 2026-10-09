//#include <iostream>
//using namespace std;
//// Creating LinkedStack class
//class LinkedStack {
//private:
//    // Structure of Node
//    typedef struct Node {
//        int data;
//        Node* next;
//        // Constructor
//        Node(int value) {
//            data = value;
//            next = nullptr;
//        }
//    };
//    Node* top;
//public:
//    // Constructor
//    LinkedStack() {
//        top = nullptr;
//    }
//    // Push an element onto the stack
//    void Push(int value) {
//        Node* newNode = new Node(value);
//        newNode->next = top;
//        top = newNode;
//        cout << value << " pushed into stack." << endl;
//    }
//    // Remove the top element
//    void Pop() {
//        if (IsEmpty()) {
//            cout << "Stack is already empty." << endl;
//            return;
//        }
//        Node* temp = top;
//        cout << "Popped value: " << temp->data << endl;
//        top = top->next;
//        delete temp;
//    }
//    // Display the top element without removing it
//    void Peek() {
//        if (IsEmpty()) {
//            cout << "Stack is empty! Cannot peek." << endl;
//            return;
//        }
//        cout << "Top element: " << top->data << endl;
//    }
//    // Check whether the stack is empty
//    bool IsEmpty() {
//        return top == nullptr;
//    }
//    // Display elements from top to bottom
//    void Display() {
//        if (IsEmpty()) {
//            cout << "Stack is empty." << endl;
//            return;
//        }
//        Node* curr = top;
//        cout << "Stack (top to bottom): ";
//        while (curr != nullptr) {
//            cout << curr->data << " ";
//            curr = curr->next;
//        }
//        cout << endl;
//    }
//    // Delete all remaining nodes
//    void ClearStack() {
//        while (top != nullptr) {
//            Node* temp = top;
//            top = top->next;
//            delete temp;
//        }
//        cout << "Stack cleared. All nodes deleted." << endl;
//    }
//    // Destructor
//    ~LinkedStack() {
//        ClearStack();
//    }
//};
//
//int main() {
//    //Creating object of LinkedStack
//    LinkedStack s;
//    int choice, value;
//    do {
//        cout << "\n======== LINKED STACK MENU ========" << endl;
//        cout << "1. Push" << endl;
//        cout << "2. Pop" << endl;
//        cout << "3. Peek" << endl;
//        cout << "4. Display" << endl;
//        cout << "5. Exit" << endl;
//        cout << "Enter your choice: ";
//        // Entering choice
//        if (!(cin >> choice)) {
//            cout << "Invalid input." << endl;
//            break;
//        }
//        switch (choice) {
//        case 1:
//            cout << "Enter value to push: ";
//            cin >> value;
//            s.Push(value);
//            break;
//        case 2:
//            s.Pop();
//            break;
//        case 3:
//            s.Peek();
//            break;
//        case 4:
//            s.Display();
//            break;
//        case 5:
//            s.ClearStack();
//            cout << "Program exited." << endl;
//            break;
//        default:
//            cout << "Invalid choice! Please select 1 to 5." << endl;
//        }
//    } while (choice != 5);
//    return 0;
//}
//
///* LIFO means Last In, First Out. That is the last element pushed is the first element to pop. */
///* Array has fixed size but linked list is dynamic in nature. */
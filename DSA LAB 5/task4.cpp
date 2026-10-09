//#include <iostream>
//using namespace std;
//// Creating Node class with attributes
//class Node {
//public:
//    int data;
//    Node* next;
//    // Constructor of Node
//public:
//    Node(int value) {
//        data = value;
//        next = nullptr;
//    }
//};
//// Creating CircularList class with attributes
//class CircularList {
//public:
//    Node* head;
//    Node* tail;
//    // Methods of CircularList
//public:
//    CircularList() {
//        head = nullptr;
//        tail = nullptr;
//    }
//    // Function to add node in the list
//    void AddNode(int value) {
//        Node* n = new Node(value);
//        if (head == nullptr) {
//            head = n;
//            tail = n;
//            tail->next = head; // Circular list containing address of head in the next of tail
//        }
//        else {
//            tail->next = n;
//            tail = n;
//            tail->next = head;
//        }
//    }
//    void DeleteNode(int value) {
//        // Case 1: Empty list
//        if (head == nullptr) {
//            cout << "List is empty. Nothing to delete." << endl;
//            return;
//        }
//        Node* curr = head;
//        Node* prev = tail;
//        // Searching for the value and stopping after one cycle
//        do {
//            if (curr->data == value) {
//                // Case 2: Only one node
//                if (head == tail) {
//                    delete curr;
//                    head = nullptr;
//                    tail = nullptr;
//                }
//                else {
//                    // Connecting previous node to next node
//                    prev->next = curr->next;
//                    // Case 3: Deleting the head
//                    if (curr == head) {
//                        head = curr->next;
//                    }
//                    // Case 4: Deleting the tail
//                    if (curr == tail) {
//                        tail = prev;
//                    }
//                    // Preserve circular connection
//                    tail->next = head;
//
//                    delete curr;
//                }
//                cout << value << " deleted successfully." << endl;
//                return;
//            }
//            prev = curr;
//            curr = curr->next;
//        } while (curr != head);
//        // Value was not found after one complete cycle
//        cout << value << " not found." << endl;
//    }
//    // Function to print the list
//    void PrintList() {
//        // Checking the list is empty or not
//        if (head == nullptr) {
//            cout << "List is empty." << endl;
//            return;
//        }
//        Node* curr = head;
//        do {
//            cout << curr->data << " -> ";
//            curr = curr->next;
//        } while (curr != head);
//        cout << "(back to head)" << endl;
//    }
//    // Function to count nodes
//    int CountNodes() {
//        if (head == nullptr) {
//            return 0;
//        }
//        int count = 0;
//        Node* curr = head;
//        do {
//            count++;
//            curr = curr->next;
//        } while (curr != head);
//        return count;
//    }
//    // Deallocating all the nodes
//    void ClearList() {
//        if (head == nullptr) {
//            return;
//        }
//        Node* curr = head->next;
//        while (curr != head) {
//            Node* temp = curr;
//            curr = curr->next;
//            delete temp;
//        }
//        delete head;
//        head = nullptr;
//        tail = nullptr;
//    }
//    // Destructor of CircularList
//    ~CircularList() {
//        ClearList();
//    }
//};
//
//int main() {
//    // Creating object of CircularList
//    CircularList list;
//
//    // Case 1: Empty list
//    cout << "Case 1: Empty list" << endl;
//    list.PrintList();
//    cout << "Count: " << list.CountNodes() << endl;
//    list.DeleteNode(10);
//
//    // Case 2: Delete head, tail, and only node
//    cout << "\nCase 2: Delete head, tail, and only node" << endl;
//    list.AddNode(10);
//    list.AddNode(20);
//    list.AddNode(30);
//
//    cout << "Original list:" << endl;
//    list.PrintList();
//    cout << "Count: " << list.CountNodes() << endl;
//
//    cout << "\nDeleting head (10):" << endl;
//    list.DeleteNode(10);
//    list.PrintList();
//    cout << "Count: " << list.CountNodes() << endl;
//
//    cout << "\nDeleting tail (30):" << endl;
//    list.DeleteNode(30);
//    list.PrintList();
//    cout << "Count: " << list.CountNodes() << endl;
//
//    cout << "\nDeleting only node (20):" << endl;
//    list.DeleteNode(20);
//    list.PrintList();
//    cout << "Count: " << list.CountNodes() << endl;
//
//    cout << "head == nullptr: "
//        << (list.head == nullptr) << endl;
//    cout << "tail == nullptr: "
//        << (list.tail == nullptr) << endl;
//
//    // Case 3: Missing value
//    cout << "\nCase 3: Missing value" << endl;
//    list.AddNode(10);
//    list.AddNode(20);
//    list.AddNode(30);
//
//    list.DeleteNode(100);
//    list.PrintList();
//    cout << "Count: " << list.CountNodes() << endl;
//
//    list.ClearList();
//
//    // Case 4: Duplicate values
//    cout << "\nCase 4: Duplicate values" << endl;
//    list.AddNode(10);
//    list.AddNode(20);
//    list.AddNode(20);
//    list.AddNode(30);
//
//    cout << "Original list:" << endl;
//    list.PrintList();
//    cout << "Count: " << list.CountNodes() << endl;
//
//    cout << "\nDeleting 20 once:" << endl;
//    list.DeleteNode(20);
//    list.PrintList();
//    cout << "Count: " << list.CountNodes() << endl;
//
//    list.ClearList();
//
//    return 0;
//}
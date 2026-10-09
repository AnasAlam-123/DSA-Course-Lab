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
//    // Creating the object of CircularList
//    CircularList list;
//    // Cases
//    cout << "Case 1: If list is empty" << endl;
//    list.PrintList();
//    cout << "Count: " << list.CountNodes() << endl;
//
//    cout << "\nCase 2: If list has one node" << endl;
//    list.AddNode(5);
//    list.PrintList();
//    cout << "Count: " << list.CountNodes() << endl;
//
//    list.ClearList();
//
//    cout << "\nCase 3: If list has three nodes" << endl;
//    list.AddNode(10);
//    list.AddNode(20);
//    list.AddNode(30);
//
//    list.PrintList();
//    cout << "Count: " << list.CountNodes() << endl;
//
//    list.ClearList();
//    return 0;
//}
//
///*As in a circular linked list, the last node points back to the 
//first node(head) instead of nullptr.Therefore, a normal nullptr 
//based traversal will not terminate on a non - empty circular linked list. 
//To terminate a circular linked traversal should return to head.*/ 
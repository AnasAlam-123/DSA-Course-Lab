//#include <iostream>
//using namespace std;
//
//// Creating List class with struct Node
//class List {
//public:
//    typedef struct Node {
//        int data; // Data stores the value of the node
//		Node* next; // Pointer that stores the address of the next node
//    }* nodeptr;
//
//    nodeptr head;
//    nodeptr curr;
//	nodeptr temp;
//
//// Creating public methods for the List class
//public:
//    List();
//    void CreateThreeNodes();
//    void PrintList();
//    void ClearList();
//};
//
//// Constructor
//List::List() {
//    head = nullptr;
//	curr = nullptr;
//    temp = nullptr;
//}
//
//// Creating three nodes and link them
//void List::CreateThreeNodes() {
//    int value;
//
//    nodeptr first;
//    nodeptr second;
//    nodeptr third;
//
//    cout << "Enter 3 integers: ";
//
//    cin >> value;
//    first = new Node;
//    first->data = value;
//
//    cin >> value;
//    second = new Node;
//    second->data = value;
//
//    cin >> value;
//    third = new Node;
//    third->data = value;
//
//    // Linking nodes in input order
//    first->next = second;
//    second->next = third;
//    third->next = nullptr;
//
//    head = first;
//}
//
//// Print the list
//void List::PrintList() {
//	// Checking if the list is empty or not
//    if (head == nullptr) {
//        cout << "List is empty." << endl;
//        return;
//    }
//    curr = head;
//    while (curr != nullptr) {
//        cout << curr->data << " -> ";
//        curr = curr->next;
//    }
//    cout << endl;
//}
//
//// Deleting all nodes
//void List::ClearList() {
//    curr = head;
//
//    while (curr != nullptr) {
//        temp = curr;
//        curr = curr->next;
//        delete temp;
//    }
//
//    head = nullptr;
//}
//
//int main() {
//
//    List list;
//
//    // Before creation
//    cout << "Before creation: ";
//    list.PrintList();
//
//    // Creating three nodes
//    list.CreateThreeNodes();
//
//    // After creation
//    cout << "After creation: ";
//    list.PrintList();
//
//    // Cleanup
//    list.ClearList();
//    return 0;
//}
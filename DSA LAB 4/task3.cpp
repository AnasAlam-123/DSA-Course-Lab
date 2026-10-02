//#include <iostream>
//using namespace std;
//
//// Creating List class with struct Node
//class List {
//public:
//    typedef struct Node {
//        int data; // Data stores the value of the node
//        Node* next; // Pointer that stores the address of the next node
//    }*nodeptr;
//
//    nodeptr head;
//    nodeptr curr;
//    nodeptr temp;
//
//    // Creating public methods for the List class
//public:
//    List();
//    void AddNode(int addData);
//    void SearchNode(int searchData);
//    void PrintSecondNode();
//    void PrintList();
//	void ClearList();
//};
//
//// Constructor
//List::List() {
//    head = nullptr;
//    curr = nullptr;
//	temp = nullptr;
//}
//
//// Creating a new node and adding it to the list
//void List::AddNode(int addData) {
//    nodeptr n = new Node;
//    n->data = addData;
//    n->next = nullptr;
//    if (head == nullptr) {
//        head = n;
//        curr = n;
//    }
//    else {
//        curr->next = n;
//        curr = n;
//    }
//}
//
//// Searching for a node in the list
//void List::SearchNode(int searchData) {
//    curr = head;
//    int position = 1;
//	// Checking if the node of given data is present in the list or not
//    while (curr != nullptr) {
//        if (curr->data == searchData) {
//			cout << "Position of " << searchData << " in the list is: " << position << endl;
//            return;
//        }
//		curr = curr->next;
//        position++;
//    }
//    cout << "Position of " << searchData << " in the list is not found." << endl;
//}
//
//// Print the second node in the list
//void List::PrintSecondNode() {
//    if (head == nullptr || head->next == nullptr) {
//        cout << "List has less than 2 nodes." << endl;
//        return;
//    }
//    cout << "The second node in the list is: " << head->next->data << endl;
//}
//
//// Print the list
//void List::PrintList() {
//    // Checking if the list is empty or not
//    if (head == nullptr) {
//        cout << "List is empty." << endl;
//        return;
//    }
//    curr = head;
//    while (curr != nullptr) {
//        cout << curr->data << " -> ";
//        curr = curr->next;
//    }
//    cout << "NULL" << endl;
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
//	// Adding nodes to the list
//	list.AddNode(10);
//	list.AddNode(20);
//	list.AddNode(30);
//	list.AddNode(20);
//
//	// Printing the list
//	cout << "The list is: ";
//	list.PrintList();
//
//	// Printing the second node in the list
//	list.PrintSecondNode();
//
//	// Searching the given data in the list and printing the position of the node if found
//    list.SearchNode(20);
//	list.SearchNode(99);
//
//	// Deleting all nodes in the list
//	list.ClearList();
//    return 0;
//}
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
//    void DeleteNode(int delData);
//    void PrintList();
//    void ClearList();
//};
//
//// Constructor
//List::List() {
//    head = nullptr;
//    curr = nullptr;
//    temp = nullptr;
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
//// Deleting a node from the list
//void List::DeleteNode(int delData) {
//	curr = head;
//	nodeptr prev = nullptr;
//	temp = head;
//	while (curr != nullptr) {
//		if (curr->data == delData) {
//			if (prev == nullptr) {
//				head = curr->next;
//			}
//			else {
//				prev->next = curr->next;
//			}
//			delete curr;
//			cout << "Element deleted" << endl;
//			return;
//		}
//		prev = curr;
//		curr = curr->next;
//	}
//	cout << "Element not found" << endl;
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
//    // Adding node to the list
//	list.AddNode(10);
//    list.AddNode(20);
//    list.AddNode(20);
//    list.AddNode(30);
//
//    // Printing the list before deletion
//    cout << "The list is: ";
//    list.PrintList();
//
//	// Deleting a node from the list
//	list.DeleteNode(20);
//
//	// Printing the list after deletion
//	cout << "The list after deletion becomes: ";
//	list.PrintList();
//
//    // Deleting all nodes in the list
//    list.ClearList();
//    return 0;
//}
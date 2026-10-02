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
//	nodeptr temp;
//
//    // Creating public methods for the List class
//public:
//    List();
//    void AddNode(int addData);
//    void CountNodes();
//    void PrintList();
//    void ClearList();
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
//// Counting the number of nodes in the list
//void List::CountNodes() {
//    int count = 0;
//    curr = head;
//    while (curr != nullptr) {
//        count++;
//        curr = curr->next;
//    }
//    cout << "Number of nodes in the list: " << count << endl;
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
//    int n;
//    int value;
//
//	// Taking input from the user for the number of nodes and their values
//	cout << "Enter the number of nodes: ";
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        cout << "Enter value for node " << i + 1 << ": ";
//        cin >> value;
//        list.AddNode(value);
//	}
//
//	// Counting and printing the number of nodes in the list
//    list.CountNodes();
//	// Printing the number of nodes in the list
//	cout << "The list is: ";
//	list.PrintList();
//	// Deleting all nodes in the list
//	list.ClearList();
//    return 0;
//}
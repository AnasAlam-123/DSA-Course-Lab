#include <iostream>
using namespace std;
// Creating List class with struct Node
class List {
public:
    typedef struct Node {
        int data;
        Node* next;
    }*nodeptr;

    nodeptr head;
    nodeptr curr;
    nodeptr temp;
    nodeptr prev;
	// Creating public methods for the List class
public:
    List();
    void AddNode(int addData);              // Insert at the end
    void InsertAtBeginning(int addData);    // Insert at the beginning
    void SearchNode(int searchData);        // Search by value
    void DeleteNode(int delData);           // Delete by value
    void PrintList();                       // Display all nodes
    void CountNodes();                      // Count nodes
    void PrintSecondNode();                 // Display second node
    void ClearList();                       // Delete all nodes
};

// Constructor
List::List() {
    head = nullptr;
    curr = nullptr;
    temp = nullptr;
	prev = nullptr;
}

// Inserting at the end
void List::AddNode(int addData) {
    nodeptr n = new Node;
    n->data = addData;
    n->next = nullptr;
	// Checking if the list is empty or not
    if (head == nullptr) {
        head = n;
        curr = n;
    }
    else {
        curr->next = n;
        curr = n;
    }
}

// Inserting at the beginning
void List::InsertAtBeginning(int addData) {
    nodeptr n = new Node;
    n->data = addData;
    n->next = head;
    head = n;

    // If list was empty, this new node becomes the last node
    if (curr == nullptr) {
        curr = n;
    }
}

// Searching by value
void List::SearchNode(int searchData) {
    nodeptr current = head;
    int position = 1;
	// Searching the value in the list
    while (current != nullptr) {
        if (current->data == searchData) {
            cout << "Value " << searchData << " found at position " << position << endl;
            return;
        }
        current = current->next;
		position++; // Increment position for each node
    }
    cout << "Value not found." << endl;
}

// Deleting first node containing the value
void List::DeleteNode(int delData) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    nodeptr current = head;
    prev = nullptr;
    while (current != nullptr) {
        if (current->data == delData) {
            // Deleting first node
            if (prev == nullptr) {
                head = current->next;
            }
            else {
                // Deleting middle or last node
                prev->next = current->next;
            }
            // Deleting the last node
            if (current == curr) {
                curr = prev;
            }
            delete current;
            cout << "Element deleted" << endl;
            return;
        }
        prev = current;
        current = current->next;
    }
    cout << "Element not found" << endl;
}

// Displaying all nodes
void List::PrintList() {
	// Checking if the list is empty or not
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    nodeptr current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

// Counting the number of nodes in the list
void List::CountNodes() {
    int count = 0;
    nodeptr current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
	cout << "Number of nodes in the list: " << count << endl;
}

// Displaying second node of the list
void List::PrintSecondNode() {
    if (head == nullptr || head->next == nullptr) {
        cout << "List has less than 2 nodes." << endl;
        return;
    }
    cout << "The second node is: " << head->next->data << endl;
}

// Deleting all nodes of the list
void List::ClearList() {
    curr = head;
    while (curr != nullptr) {
        temp = curr;
        curr = curr->next;
        delete temp;
    }
    head = nullptr;
    curr = nullptr;
    temp = nullptr;
}

int main() {
	// Creating an object of the List class
    List list;

    int choice;
    int value;

    do {
		cout << endl;
        cout << "========== LINKED LIST MENU ==========" << endl;
        cout << "1. Insert at beginning" << endl;
        cout << "2. Insert at end" << endl;
        cout << "3. Search by value" << endl;
        cout << "4. Delete by value" << endl;
        cout << "5. Display all nodes" << endl;
        cout << "6. Count nodes" << endl;
        cout << "7. Display second node" << endl;
        cout << "8. Exit" << endl;
        cout << "=======================================" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter value to insert at beginning: ";
            cin >> value;
            list.InsertAtBeginning(value);
            cout << "Value inserted successfully." << endl;
            break;

        case 2:
            cout << "Enter value to insert at end: ";
            cin >> value;
            list.AddNode(value);
            cout << "Value inserted successfully." << endl;
            break;

        case 3:
            cout << "Enter value to search: ";
            cin >> value;
            list.SearchNode(value);
            break;

        case 4:
            cout << "Enter value to delete: ";
            cin >> value;
            list.DeleteNode(value);
            break;

        case 5:
            cout << "The linked list is: ";
            list.PrintList();
            break;

        case 6:
            cout << "Number of nodes: ";
            list.CountNodes();
            break;

        case 7:
			cout << "The second node is: ";
            list.PrintSecondNode();
            break;

        case 8:
            cout << "Exiting program..." << endl;
            list.ClearList();
            cout << "All remaining nodes have been released." << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 8." << endl;
        }

    } while (choice != 8);
    return 0;
}
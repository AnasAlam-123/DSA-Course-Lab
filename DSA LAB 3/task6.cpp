#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    double marks;
};

void displayStudent(const Student* s) {

    cout << "Roll Number: " << s -> rollNumber << endl;
    cout << "Name: " << s -> name << endl;
    cout << "Marks: " << s -> marks << endl;
}

void updateMarks(Student* s, float newMarks) {

	s -> marks = newMarks;

}

void deleteStudent(Student*& s) {
    delete s;
    s = nullptr;
}

void displayIfExists(const Student* s) {
    if (s != nullptr) {
        displayStudent(s);
    }
    else {
        cout << "No record available" << endl;
    }
}

int main() {
    
    Student* ptr = nullptr;
    int choice;

    do {
        cout << "===== MENU =====" << endl;
        cout << "1. Create Student Record" << endl;
        cout << "2. Display Student Record" << endl;
        cout << "3. Update Student Record" << endl;
        cout << "4. Delete Student Record" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            // Create Student Record
            if (ptr != nullptr) {
                cout << "Student record already exists. Please delete it first." << endl;
            }
            else {
                ptr = new Student{};
                cout << "Enter roll number: ";
                cin >> ptr->rollNumber;
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, ptr->name);
                cout << "Enter marks: ";
                cin >> ptr->marks;
                cout << "Student record created successfully." << endl;
            }
            break;
        case 2:
            // Display Student Record
            displayIfExists(ptr);
            break;
        case 3:
            // Update Student Record
            if (ptr != nullptr) {
                float newMarks;
                cout << "Enter new marks: ";
                cin >> newMarks;
                updateMarks(ptr, newMarks);
                cout << "Student record updated successfully." << endl;
            }
            else {
                cout << "No student record exists. Please create one first." << endl;
            }
            break;
        case 4:
            // Delete Student Record
            if (ptr != nullptr) {
                deleteStudent(ptr);
                cout << "Student record deleted successfully." << endl;
            }
            else {
                cout << "No student record exists to delete." << endl;
            }
            break;
        case 5:
            cout << "Exiting the program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 5);
    return 0;
}
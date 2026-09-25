//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Student {
//    int rollNumber;
//    string name;
//    double marks;
//};
//
//void displayStudent(const Student* s) {
//
//    cout << "Roll Number: " << s->rollNumber << endl;
//    cout << "Name: " << s->name << endl;
//    cout << "Marks: " << s->marks << endl;
//}
//
//void displayIfExists(const Student* s) {
//    if (s != nullptr) {
//        displayStudent(s);
//    }
//    else {
//        cout << "No record available" << endl;
//    }
//}
//
//int main() {
//
//    Student* ptr = nullptr;
//
//    cout << "Before allocation" << endl;
//    displayIfExists(ptr);
//
//    ptr = new Student{};
//
//    cout << "Enter roll number: ";
//    cin >> ptr->rollNumber;
//
//    cout << "Enter name: ";
//    cin.ignore();
//    getline(cin, ptr->name);
//
//    cout << "Enter marks: ";
//    cin >> ptr->marks;
//
//    cout << "After allocation" << endl;
//    displayIfExists(ptr);
//
//    cout << "=== Student Details ===" << endl;
//    displayStudent(ptr);
//
//    delete ptr;
//    ptr = nullptr;
//
//    cout << "After deletion" << endl;
//    displayIfExists(ptr);
//
//    return 0;
//}	
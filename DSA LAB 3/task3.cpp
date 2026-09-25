//#include<iostream>
//#include<string>
//using namespace std;
//
// struct Student {
//		int rollNumber;
//		string name;
//		double marks;
//	};
// 
//int main() {
//
//	Student s;
//	Student* ptr = new Student;
//
//	cout << "Enter roll number: ";
//	cin >> ptr -> rollNumber;
//	cout << "Enter name: ";
//	cin.ignore(); // To ignore the newline character left in the input buffer
//	getline(cin, ptr -> name);
//	cout << "Enter marks: ";
//	cin >> ptr -> marks;
//
//	cout << "===Student Details===" << endl;
//	cout << "Roll Number: " << ptr -> rollNumber << endl;
//	cout << "Name: " << ptr -> name << endl;
//	cout << "Marks: " << ptr -> marks << endl;
//
//	delete ptr; // Free the dynamically allocated memory
//	ptr = NULL;
//
//	return 0;
//}
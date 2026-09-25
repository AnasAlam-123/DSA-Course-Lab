//#include<iostream>
//#include<string>
//using namespace std;
//
//struct Student {
//	int rollNumber;
//	string name;
//	double marks;
//};
//
//void displayStudent(const Student* s) {
//	
//	cout << "Roll Number: " << s -> rollNumber << endl;
//	cout << "Name: " << s -> name << endl;
//	cout << "Marks: " << s -> marks << endl;
//}
//void updateMarks(Student* s, float newMarks) {
//
//	s->marks = newMarks;
//
//}
//
//int main() {
//
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
//	displayStudent(ptr);
//
//	cout << "Updated marks: ";
//	float newMarks;
//	cin >> newMarks;
//
//	updateMarks(ptr, newMarks);
//
//	cout << "===Updated Student Details===" << endl;
//	displayStudent(ptr);
//
//	delete ptr; // Free the dynamically allocated memory
//	ptr = NULL;
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main() {
//	// Declaring n for size of array
//	int n;
//	// Taking number of students
//	cout << "Enter number of students (1 - 10): ";
//	cin >> n;
//	// Validating the number of students
//	if (n < 1 || n > 10) {
//		cout << "Invalid number of students." << endl;
//		return 1;
//	}
//
//	// Dynamic allocation of marks array
//	int* marks = new int[n];
//
//	// Taking marks of students
//	cout << "Enter " << n << " marks: ";
//	for (int i = 0; i < n; i++) {
//		cin >> *(marks + i);
//	}
//
//	// Creating a new dynamic array with size n+1
//	int* newMarks = new int[n + 1];
//
//	// Copying the old marks to the new array
//	for (int i = 0; i < n; i++) {
//		*(newMarks + i) = *(marks + i);
//	}
//
//	// Taking input of the new student's marks
//	cout << "Enter the new student's marks: ";
//	cin >> *(newMarks + n);
//
//	// Release the old block of memory
//	delete[] marks;
//
//	// Pointing marks to the new block 
//	marks = newMarks; 
//
//	// Updating the size 
//	n = n + 1; 
//
//	// Displaying all marks
//	cout << "All marks: "; 
//	for (int i = 0; i < n; i++) { 
//		cout << *(marks + i) << " "; 
//	} 
//	cout << endl; 
//
//	// Release the final block exactly once 
//	delete[] marks; 
//	marks = nullptr;
//	return 0;
//}
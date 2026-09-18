//#include<iostream>
//using namespace std;
//int main() {
//	// Declaring n for size of array, total, average of marks passCount of students passed
//	int n;
//	double total = 0;
//	double average = 0;
//	int passCount = 0;
//
//	// Taking number of students
//	cout << "Enter number of students: ";
//	cin >> n;
//	// Validating the number of students
//	if (n <= 0) {
//		cout << "Error; no allocation or mark input" << endl;
//		return 1;
//	}
//
//	// Dynamic allocation of marks array
//	int* marks = new int[n];
//
//	// Taking marks of students
//	cout << "Enter marks of students (0 - 100): ";
//	for (int i = 0; i < n; i++) {
//		cin >> *(marks + i);
//		// Validating the marks entered
//		if (*(marks + i) < 0 || *(marks + i) > 100) {
//			cout << "Invalid marks entered. Re-enter the marks of the same student." << endl;
//			i--; // Decreasing i to re-enter the marks for the same student
//		}
//		// Calculating total, average and passCount
//		total += *(marks + i);
//		average = total / n;
//		if (*(marks + i) >= 50) {
//			passCount++;
//		}
//	}
//	// Displaying the marks of students, total, average and passCount
//	for (int i = 0; i < n; i++) {
//		cout << "Marks of student " << i + 1 << ": " << *(marks + i) << endl;
//	}
//	cout << "Total marks: " << total << endl;
//	cout << "Average of marks: " << average << endl;
//	cout << "Number of students passed: " << passCount << endl;
//
//	// Deallocating the memory allocated for marks array
//	delete[] marks;
//	// Making the pointer to NULL after deallocation
//	marks = NULL;
//	return 0;
//}
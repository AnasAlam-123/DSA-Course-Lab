//#include<iostream>
//using namespace std;
//int main() {
//	// Declaring rows and columns
//	int rows;
//	int columns;
//	// Taking input of number of students and subjects
//	cout << "Enter number of students: ";
//	cin >> rows;
//	cout << "Enter number of subjects: ";
//	cin >> columns;
//	// Validating the number of students and subjects
//	if (rows <= 0) { 
//		cout << "Invalid number of students." << endl;
//		return 1; 
//	}
//	if (columns <= 0) { 
//		cout << "Invalid number of subjects." << endl; 
//		return 1; 
//	}
//
//	// Dynamic allocation of 2D array for marks using pointer
//	int** marks = new int* [rows];
//	// Allocating column integers for each row
//	for (int r = 0; r < rows; r++) {
//		marks[r] = new int[columns];
//	}
//
//	// Taking input of marks for each student in each subject
//	cout << "Enter marks row by row: "; 
//	for (int r = 0; r < rows; r++) { 
//		for (int c = 0; c < columns; c++) { 
//			cin >> *(*(marks + r) + c); 
//		} 
//	}
//	// Printing the marks matrix
//	cout << "Marks Matrix: " << endl; 
//	for (int r = 0; r < rows; r++) { 
//		for (int c = 0; c < columns; c++) { 
//			cout << *(*(marks + r) + c) << " "; 
//		} 
//		cout << endl; 
//	}
//
//	// Find the first student's total 
//	int bestTotal = 0; 
//	for (int c = 0; c < columns; c++) { 
//		bestTotal += *(*(marks + 0) + c); 
//	} 
//	int bestStudent = 1; 
//	// Calculating remaining students' totals 
//	for (int r = 1; r < rows; r++) { 
//		int total = 0; 
//		for (int c = 0; c < columns; c++) { 
//			total += *(*(marks + r) + c);
//		} 
//		// Display each student's total
//		cout << "Student " << r << " total: " << total << endl; 
//		if (total > bestTotal) { 
//			bestTotal = total; 
//			bestStudent = r + 1; 
//		} 
//	}
//	// Display first student's total 
//	cout << "Student with highest total: " << bestStudent << endl; 
//	cout << "Highest total: " << bestTotal << endl; 
//	// Delete each separately allocated row 
//	for (int r = 0; r < rows; r++) { 
//		delete[] marks[r]; 
//	} 
//	// Delete the row-pointer array 
//	delete[] marks; 
//	// Set pointer to nullptr 
//	marks = nullptr;
//	
//	return 0;
//}
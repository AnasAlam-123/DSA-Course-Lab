//#include<iostream>
//using namespace std;
//int main() {
//	// Declaring a 2D array of size 2x3 and a pointer to the first row of the array
//	int sales[2][3];
//	int (*rowPtr)[3] = sales;
//	int total = 0;
//
//	// Taking input of sales for 2 branches across 3 days
//	cout << "Enter the sales for 2 braches across 3 days: " << endl;
//	for (int r = 0; r < 2; r++) {
//		for (int c = 0; c < 3; c++) {
//			cin >> *(*(rowPtr + r) + c);
//			// Validating the sales entered
//			if (*(*(rowPtr + r) + c) < 0) {
//				cout << "Invalid sales entered. Re-enter the sales of the same branch and day." << endl;
//				c--; // Decreasing j to re-enter the sales for the same branch and day
//			}
//		}
//	}
//
//	// Displaying the sales of 2 branches across 3 days
//	cout << "=====Sales of 2 branches across 3 days=====" << endl;
//	for (int r = 0; r < 2; r++) {
//		for (int c = 0; c < 3; c++) {
//			cout << "Sales of branch " << r + 1 << " on day " << c + 1 << ": " << *(*(rowPtr + r) + c) << endl;
//		}
//	}
//
//	// Total sales for each branch
//	cout << "Total sales for " << endl;
//	for (int r = 0; r < 2; r++) {
//		total = 0;
//		for (int c = 0; c < 3; c++) {
//			total += *(*(rowPtr + r) + c);
//		}
//		cout << "Branch " << r + 1 << ": " << total << endl;
//	}
//	// Total sales for each day
//	cout << "Total sales for " << endl;
//	for (int c = 0; c < 3; c++) {
//		total = 0;
//		for (int r = 0; r < 2; r++) {
//			total += *(*(rowPtr + r) + c);
//		}
//		cout << "Day " << c + 1 << ": " << total << endl;
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//// Function to display the sales and total of sales
//void display(int* p, int size, int sum) {
//	// Printing all the sales of 5 days
//	cout << "Sale of 5 days are: " << endl;
//	for (int i = 0; i < size; i++) {
//		/* p points to the starting address of the sales array
//			and i increases it to the next element*/ 
//		cout << *(p + i) << endl;
//		sum += *(p + i);
//	}
//	// Printing the total of sales
//	cout << "Total sales are: " << sum << endl;
//}
//
//int main() {
//	// Declaring an array of size 5 and initiallize total to 0
//	int sales[5];
//	int* p = sales;
//	int total = 0;
//
//	// Taking input of sales for 5 days
//	cout << "Enter the sales of 5 days: " << endl;
//	for (int i = 0; i < 5; i++) {
//		cin >> *(p + i);
//	}
//	// Displaying the sales and total befor update
//	display(p, 5, total);
//
//	cout << "After adding 2 to the sales of day 3: " << endl;
//	// Adding 2 to the sales of day 3
//	p[2] = p[2] + 2;
//	// Displaying the sales and total after update
//	display(p, 5, total);
//	return 0;
//}
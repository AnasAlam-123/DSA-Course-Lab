/* 
	Student Management System 
	
	Data structures:
	1. Array:
			As array can store student roll numbers and names, and aso 
			its capacity increases automatically when it gets full.
	2. Stack:
			As stack works on LIFO (Last In First Out) order and handles 
			search history as the recent search comes on the top of the history.
*/

#include<iostream>
#include<string>
#include <limits>
using namespace std;

// Creating a structure to store student roll number and name
struct Student {
	int rollNumber;
	string name;
};

// Initializing capacity and student count of the dynamic array
int capacity = 20;
int studentCount = 0;

// Dynamically allocated student array
Student* studentArray = new Student[capacity];

// Defining the size of the search history stack and initializing the top index
#define HISTORY_SIZE 100
int searchHistory[HISTORY_SIZE];
int top = -1;

// Function prototypes
void addStudent();
void searchStudent();
void displayStudents();
void resizeArray();
void pushHistory(int rollNumber);
void displayHistory();
void popHistory();
void freeMemory();

// Function to add a student to the dynamic array
void addStudent() {
    int rollNumber;
    string name;
    // Taking input for roll number
    cout << "Enter the roll number of the student: ";
    cin >> rollNumber;

    // Checking for duplicate roll number
    for (int i = 0; i < studentCount; i++) {
        if (studentArray[i].rollNumber == rollNumber) {
            cout << "Student with roll number " << rollNumber
                 << " already exists. Cannot add duplicate student." << endl;
            return;
        }
    }

    // Checking if dynamic array is full
    if (studentCount == capacity) {
        resizeArray();
    }

    // Taking input for student name
    cout << "Enter the name of the student: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);

    // Adding student to dynamic array
    studentArray[studentCount].rollNumber = rollNumber;
    studentArray[studentCount].name = name;
    studentCount++;
    cout << "Student added successfully." << endl;
}

// Function to search a student by roll number and push it into the search history stack
void searchStudent() {
	// Taking input for roll number from the user
	int rollNumber;
	cout << "Enter the roll number of the student to search: ";
	cin >> rollNumber;
	// Initializing a boolean variable to check if the student exists or not
	bool studentExists = false;
	// Searching for the student in the student array
	for (int i = 0; i < studentCount; i++) {
		if (studentArray[i].rollNumber == rollNumber) {
			cout << "Student found: " << studentArray[i].name << endl;
			studentExists = true;
			pushHistory(rollNumber);
			break;
		}
	}
	// Displaying the message if the student does not exists
	if (!studentExists) {
		cout << "Student with roll number " << rollNumber 
			 << " does not exist." << endl;
	}
}

// Function to display all the students in the student array
void displayStudents() {
	// Checking if the student array is empty
	if (studentCount == 0) {
		cout << "No student records to display." << endl;
		return;
	}
	// Displaying the student records
	cout << "Student Records: " << endl;
	for (int i = 0; i < studentCount; i++) {
		cout << "Roll Number: " << studentArray[i].rollNumber 
			 << ", Name: " << studentArray[i].name << endl;
	}
	// Displaying the total number of students in the student array
	cout << "Total number of students: " << studentCount << endl;
}

// Function to push the roll number into the search history stack
void pushHistory(int rollNumber) {
	// Checking if the search history stack is full
	if (top == HISTORY_SIZE - 1) {
		cout << "Search history is full. Cannot add more search history." << endl;
		return;
	}
	// Incrementing the top index and adding the roll number to the search history stack
	top++;
	searchHistory[top] = rollNumber;
}

// Displaying the search history stack in LIFO order
void displayHistory() {
	// Checking if the search history stack is empty
	if (top == -1) {
		cout << "No search history to display." << endl;
		return;
	}
	// Uses LIFO order to display the history from the recent search to the oldest search
	cout << "Search History (From recent to oldest): " << endl;
	for (int i = top; i >= 0; i--) {
		cout << "Roll Number: " << searchHistory[i] << endl;
	}
}

// Function to pop the recent search history from the search history stack
void popHistory() {
	// Checking if the search history stack is empty
	if (top == -1) {
		cout << "No search history to remove." << endl;
	}
	// Removing the most recent search from the search history stack
	else {
		cout << "Removing recent search history: Roll Number: " << searchHistory[top] << endl;
		top--;
	}
}

// Function to resize the dynamic array when it is full
void resizeArray() {
    // Doubling the current capacity
    int newCapacity = capacity * 2;
    // Creating a new larger array
    Student* newArray = new Student[newCapacity];

    // Copying existing student records to the new array
    for (int i = 0; i < studentCount; i++) {
        newArray[i] = studentArray[i];
    }

    // Deleting the old array
    delete[] studentArray;
    // Pointing the student array to the new array
    studentArray = newArray;
    // Updating capacity
    capacity = newCapacity;
    cout << "Array capacity increased to " << capacity << "." << endl;
}

// Function to free dynamically allocated memory of the student array
void freeMemory() {
    delete[] studentArray;
    studentArray = nullptr;
}

int main() {
	// Displaying the menu and taking input choice from the user
	int choice;
	cout << "====== STUDENT MANAGEMENT SYSTEM ======" << endl;
	// Menu using do while loop to display repeatedly
	do {
		cout << "\n======= MENU ========\n";
		cout << "1. Add a student" << endl;
		cout << "2. Search by roll number" << endl;
		cout << "3. Display all students" << endl;
		cout << "4. Display search history" << endl;
		cout << "5. Remove the recent search history" << endl;
		cout << "6. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case 1:
			addStudent();
			break;
		case 2:
			searchStudent();
			break;
		case 3:
			displayStudents();
			break;
		case 4:
			displayHistory();
			break;
		case 5:
			popHistory();
			break;
		case 6:
			cout << "Exiting the program." << endl;
			freeMemory();
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
	} while (choice != 6);
	return 0;
}
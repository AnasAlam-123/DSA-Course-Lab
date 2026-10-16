//#include <iostream>
//#include <cstring>
//using namespace std;
//// Declaring a char array stack of size 20 and initiating top to -1
//char items[20];
//int top = -1;
//// Function to push the characters into the stack
//void push(char value) {
//    // Checking that the stack is full
//    if (top == 19) {
//        cout << "Stack is full." << endl;
//    }
//    else {
//        top++;
//        items[top] = value;
//    }
//}
//// Function to pop the top characters from the stack
//char pop() {
//    // Checking that the stack is empty or not
//    if (top == -1) {
//        cout << "Stack is empty." << endl;
//        return '\0';
//    }
//    else {
//        char value = items[top];
//        top--;
//        return value;
//    }
//}
//
//int main() {
//    // Declaring a char array
//    char word[100];
//    // Taking input from user
//    cout << "Enter a word (maximum 20 characters): ";
//    cin >> word;
//
//    // Initiating the length to the length of word
//    int length = strlen(word);
//    // Validating the length if it is greater than 20
//    if (length > 20) {
//        cout << "Error: Word must not exceed 20 characters." << endl;
//        return 0;
//    }
//    // Pushing each character into the stack
//    for (int i = 0; i < length; i++) {
//        push(word[i]);
//    }
//    // Popping and printing characters to reverse the word
//    cout << "Reversed word: ";
//    while (top != -1) {
//        cout << pop();
//    }
//    cout << endl;
//    return 0;
//}
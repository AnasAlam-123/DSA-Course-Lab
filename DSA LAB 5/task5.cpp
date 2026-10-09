//#include <iostream>
//using namespace std;
//
//class ArrayStack {
//public:
//    int items[5];
//    int top;
//public:
//    // Constructor
//    ArrayStack() {
//        top = -1;
//    }
//    // Push an element onto the stack
//    void Push(int value) {
//        if (IsFull()) {
//            cout << "Stack is full." << endl;
//            return;
//        }
//        top++;
//        items[top] = value;
//        cout << value << " pushed into stack." << endl;
//    }
//    // Remove the top element
//    void Pop() {
//        if (IsEmpty()) {
//            cout << "Stack is already empty." << endl;
//            return;
//        }
//        cout << "Popped value: " << items[top] << endl;
//        top--;
//    }
//    // Display the top element without removing it
//    void Peek() {
//        if (IsEmpty()) {
//            cout << "Stack is empty! Cannot peek." << endl;
//            return;
//        }
//        cout << "Top element: " << items[top] << endl;
//    }
//    // Check whether the stack is empty
//    bool IsEmpty() {
//        return top == -1;
//    }
//    // Check whether the stack is full
//    bool IsFull() {
//        return top == 4;
//    }
//    // Display elements from top to bottom
//    void Display() {
//        if (IsEmpty()) {
//            cout << "Stack is empty." << endl;
//            return;
//        }
//        cout << "Stack (top to bottom): ";
//        for (int i = top; i >= 0; i--) {
//            cout << items[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    // Creating object of ArrayStack
//    ArrayStack s;
//
//    // Pushing five elements
//    s.Push(10);
//    s.Push(20);
//    s.Push(30);
//    s.Push(40);
//    s.Push(50);
//    // Dislaying the stack
//    s.Display();
//
//    // Attempt sixth push (overflow)
//    s.Push(60);
//
//    // Pop 50 from the stack
//    s.Pop();
//
//    // Peek should display 40 without removing it
//    s.Peek();
//    s.Display();
//
//    // Empty the stack
//    s.Pop();
//    s.Pop();
//    s.Pop();
//    s.Pop();
//    // Dislaying the stack
//    s.Display();
//
//    // Test pop on an empty stack
//    s.Pop();
//    return 0;
//}
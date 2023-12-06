#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

struct Stack {

    int arr[MAX_SIZE];
    int top;

    Stack() {
        top = -1; // Initialize the top of the stack to -1 (empty)
    }

    // Push operation to add an element to the top of the stack
    void push(int item) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow: Cannot push " << item << ", stack is full." << endl;
            return;
        }
        arr[++top] = item;
    }

    // Pop operation to remove and return the top element from the stack
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow: Cannot pop, stack is empty." << endl;
            return -1; // Return a sentinel value for an empty stack
        }
        return arr[top--];
    }

    // Peek operation to get the top element without removing it
    int peek() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
            return -1; // Return a sentinel value for an empty stack
        }
        return arr[top];
    }

    // Check if the stack is empty
    bool isEmpty() {
        return (top == -1);
    }

    // Get the size of the stack
    int size() {
        return top + 1;
    }
};

int main() {
    Stack stack;

    for(int i=0;i<5;i++){
        int a;
        cin>>a;stack.push(a);}

    cout << "Top element: " << stack.peek() << endl; // Outputs: 30

    stack.pop();
    cout << "After one pop, top element: " << stack.peek() << endl; // Outputs: 20

    return 0;
}

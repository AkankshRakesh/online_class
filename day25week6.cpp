#include <iostream>
using namespace std;

// Ques 1: Find the single number in an array where every element appears twice except one
int findSingle(int nums[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= nums[i];
    }
    return result;
}

// Ques 2: Stack implementation using a linked list
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void display() {
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int nums[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "The single element is: " << findSingle(nums, n) << endl;

    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Stack after pushes: ";
    stack.display();
    cout << "Top element: " << stack.peek() << endl;
    stack.pop();
    cout << "Stack after pop: ";
    stack.display();
    cout << "Top element: " << stack.peek() << endl;
}

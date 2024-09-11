#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    
    Node(int data) {
        val = data;
        next = nullptr;
    }
};

void deleteValue(Node*& head, int value) {
    if (head == nullptr) return;

    if (head->val == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* curr = head;
    while (curr->next != nullptr && curr->next->val != value) {
        curr = curr->next;
    }

    if (curr->next != nullptr) {
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }
}

void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->val;
        if (curr->next != nullptr) cout << "->";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    int temp;
    cout << "First input: ";
    cin >> temp;
    
    Node* head = new Node(temp);
    Node* curr = head;
    
    while (true) {
        cout << "Enter value or press -1 to stop: ";
        int entry;
        cin >> entry;
        if (entry == -1) break;
        
        Node* n = new Node(entry);
        curr->next = n;
        curr = curr->next;
    }
    
    cout << "Value to delete: ";
    int valueToDelete;
    cin >> valueToDelete;
    
    deleteValue(head, valueToDelete);

    printList(head);

    return 0;
}

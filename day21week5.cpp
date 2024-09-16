#include <iostream>
#include <unordered_set>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};
void insertAtPosition(Node*& head, int pos, int value) {
    Node* newNode = new Node(value);
    if (pos == 0) {
        newNode->next = head;
        if (head != nullptr) head->prev = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos - 1; i++) {
        if (temp == nullptr) {
            cout << "Position out of bounds" << endl;
            return;
        }
        temp = temp->next;
    }

    if (temp == nullptr) return;

    newNode->next = temp->next;
    if (temp->next != nullptr) temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode* head) {
    unordered_set<ListNode*> nodeSet;
    while (head != nullptr) {
        if (nodeSet.find(head) != nodeSet.end()) return true;
        nodeSet.insert(head);
        head = head->next;
    }
    return false;
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->prev = head;
    head->next->next = new Node(5);
    head->next->next->prev = head->next;

    int p = 2, x = 6;
    insertAtPosition(head, p, x);

    cout << "Doubly Linked List after insertion: ";
    printList(head);

    ListNode* cycleHead = new ListNode(3);
    cycleHead->next = new ListNode(2);
    cycleHead->next->next = new ListNode(0);
    cycleHead->next->next->next = new ListNode(-4);
    cycleHead->next->next->next->next = cycleHead->next; 

    if (hasCycle(cycleHead)) {
        cout << "Cycle detected: true" << endl;
    } else {
        cout << "Cycle detected: false" << endl;
    }
}

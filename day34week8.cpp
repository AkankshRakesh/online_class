#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reorderList(ListNode* head) {
    if (!head || !head->next) return head;

    ListNode* oddHead = head;
    ListNode* evenHead = head->next;
    ListNode* odd = oddHead;
    ListNode* even = evenHead;

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    
    odd->next = evenHead;
    return oddHead;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, value;
    cout << "Enter the number of nodes in the linked list: ";
    cin >> n;

    if (n <= 0) return 0;

    cout << "Enter the values of the nodes: ";
    cin >> value;
    ListNode* head = new ListNode(value);
    ListNode* current = head;

    for (int i = 1; i < n; i++) {
        cin >> value;
        current->next = new ListNode(value);
        current = current->next;
    }

    head = reorderList(head);
    cout << "Reordered linked list: ";
    printList(head);

    // Free allocated memory
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

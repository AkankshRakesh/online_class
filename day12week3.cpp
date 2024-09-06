// Q2

void insertAtEnd(Node*& head, int val){
    Node* curr = head;
    Node* n = new Node();
    n -> val = val;
    if(head == NULL){
        head = n;
        return;
    }
    while(curr -> next != NULL){
        curr = curr -> next;
    }
    curr -> next = n;
}
// Q1
void printLinkedList(Node* head){
    Node* curr = head;
    while(curr != NULL){
        cout << curr -> val << " ";
        curr = curr -> next;
    }
}
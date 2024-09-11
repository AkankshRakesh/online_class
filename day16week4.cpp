#include <iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
    
    Node(int data){
        val = data;
        next = NULL;
    }
};

int main() {
    int temp;
    cout << "First input: ";
    cin >> temp;
    Node* head = new Node(temp);
    Node* curr = head;
    while(true){
        cout << "Either enter val or press -1: ";
        int entry;
        cin >> entry;
        if(entry == -1) break;
        Node* n = new Node(entry);
        curr -> next = n;
        curr = curr -> next;
    }
    
    cout << "New addition?: ";
    int extra;
    cin >> extra;
    curr = head;
    Node* n = new Node(extra);
    if(curr -> val > extra){
        n -> next = curr;
    }
    else{
        while(curr -> next -> val < extra && curr -> next != NULL){
            curr = curr -> next;
        }
        if(curr -> next == NULL){
            curr -> next = n;
        }
        else{
            Node* temp = curr -> next;
            curr -> next = n;
            n -> next = temp;
            curr = temp;
        }
    }
    curr = head;
    while(curr != NULL){
        cout << curr -> val << " ";
        curr = curr -> next;
    }
}

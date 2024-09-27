#include <iostream>
using namespace std;

#define MAX 100

class PriorityQueue {
private:
    int arr[MAX];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    void enqueue(int value) {
        if (size == MAX) {
            cout << "Queue is full" << endl;
            return;
        }

        int i;
        for (i = size - 1; i >= 0 && arr[i] > value; i--) {
            arr[i + 1] = arr[i];
        }

        arr[i + 1] = value;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }

        size--;
    }

    int peek() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[size - 1];
    }

    void display() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty() {
        return size == 0;
    }
};

int main() {
    PriorityQueue pq;
    pq.enqueue(30);
    pq.enqueue(20);
    pq.enqueue(50);
    pq.enqueue(10);

    cout << "Priority Queue after enqueuing elements: ";
    pq.display();

    cout << "Highest priority element (peek): " << pq.peek() << endl;

    pq.dequeue();
    cout << "Priority Queue after dequeue: ";
    pq.display();

    cout << "Highest priority element (peek): " << pq.peek() << endl;

    return 0;
}

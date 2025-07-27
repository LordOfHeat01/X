#include <iostream>
using namespace std;
#define S 10
class Queue {
private:
    int front, rear;
    int arr[S];

public:
    Queue() {
        front = rear = -1; // Initialize to -1 to indicate an empty queue
    }

    void enque(int x) {
        if (rear == S - 1) {
            cout << "Queue is Overflow" << endl;
            return; // Return to avoid accessing out of bounds
        }
        if (front == -1 && rear == -1) {
            front = rear = 0; // First element
        } else {
            rear++;
        }
        arr[rear] = x; // Add the new element
    }

    void deque() {
        if (front == -1) {
            cout << "Queue is Underflow" << endl;
            return; // Return if the queue is empty
        }
        int x = arr[front];
        if (front == rear) { // If the queue becomes empty
            front = rear = -1; // Reset to indicate empty queue
        } else {
            front++;
        }
        cout << "Dequeued element is: " << x << endl;
    }

    void peek() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Peek of Queue is: " << arr[front] << endl;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "[";
        for (int i = front; i <= rear; i++) {
            cout << arr[i];
            if (i < rear) {
                cout << ", "; // Add a comma for separation
            }
        }
        cout << "]" << endl;
    }
};

int main() {
    Queue q;
    q.enque(10);
    // q.enque(20);
    // q.enque(30);
    // q.enque(40);
    // q.enque(50);
    // q.enque(60);
    // q.enque(70);
    // q.enque(80);
    // q.enque(90);
    // q.enque(100);
    // q.enque(110); // This should trigger overflow

    q.deque(); // Dequeue an element
    // q.deque();
    // q.deque();
    q.display(); // Display the queue again

    return 0;
}
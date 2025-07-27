#include <iostream>
using namespace std;

#define S 10

class Queue {
private:
    int arr[S];
    int front, rear;

public:
    Queue() {
        front = rear = -1; // Initialize front and rear to -1
    }

    void enqueue(int x) {
        if ((front == 0 && rear == S - 1) || (rear == (front - 1) % (S - 1))) {
            cout << "Queue Overflow" << endl; // Check for overflow
            return;
        }
        if (front == -1) { // First element to be inserted
            front = rear = 0;
            arr[rear] = x;
        } else if (rear == S - 1 && front != 0) { // Wrap around
            rear = 0;
            arr[rear] = x;
        } else {
            rear++;
            arr[rear] = x;
        }
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow" << endl; // Check for underflow
            return;
        }
        int ans = arr[front];
        if (front == rear) { // Single element in the queue
            front = rear = -1; // Reset queue
        } else if (front == S - 1) { // Wrap around
            front = 0;
        } else {
            front++;
        }
        cout << "Dequeued element is: " << ans << endl;
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty" << endl; // Check if the queue is empty
            return;
        }
        cout << "Queue elements: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
        } else {
            for (int i = front; i < S; i++) {
                cout << arr[i] << " ";
            }
            for (int i = 0; i <= rear; i++) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    q.enqueue(100);
    q.enqueue(110); // This should trigger overflow

    q.display(); // Display the queue

    q.dequeue(); // Dequeue an element
    q.dequeue();
    q.display(); // Display the queue again

    return 0;
}
//membuat queue manual dengan linkedlist tanpa menggunakan library queue
#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int x) {
        Node* temp = new Node(x);
        if (rear == nullptr) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue kosong!\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) rear = nullptr;
        delete temp;
    }

    int getFront() {
        if (!isEmpty()) return front->data;
        return -1;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    std::cout << "Elemen depan: " << q.getFront() << std::endl;
    q.dequeue();
    std::cout << "Elemen depan setelah dequeue: " << q.getFront() << std::endl;
}

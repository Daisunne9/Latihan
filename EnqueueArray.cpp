//Membuat queue manual tanpa library #include<queue>

#include <iostream>
#define MAX 5 // Ukuran maksimum queue

class Queue {
private:
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Mengecek apakah queue kosong
    bool isEmpty() {
        return (front == -1);
    }

    // Mengecek apakah queue penuh
    bool isFull() {
        return (rear == MAX - 1);
    }

    // Enqueue (menambahkan elemen)
    void enqueue(int x) {
        if (isFull()) {
            std::cout << "Queue penuh!\n";
            return;
        }
        if (isEmpty()) front = 0; // Jika kosong, set front ke 0
        arr[++rear] = x;
        std::cout << "Enqueued: " << x << std::endl;
    }

    // Dequeue (menghapus elemen)
    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue kosong!\n";
            return;
        }
        std::cout << "Dequeued: " << arr[front] << std::endl;
        front++;
        if (front > rear) front = rear = -1; // Reset jika kosong
    }

    // Menampilkan elemen depan
    int getFront() {
        if (!isEmpty()) return arr[front];
        return -1;
    }

    // Menampilkan elemen belakang
    int getBack() {
        if (!isEmpty()) return arr[rear];
        return -1;
    }

    // Menampilkan ukuran queue
    int getSize() {
        if (isEmpty()) return 0;
        return (rear - front + 1);
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    std::cout << "Elemen depan: " << q.getFront() << std::endl;
    std::cout << "Elemen belakang: " << q.getBack() << std::endl;
    std::cout << "Ukuran queue: " << q.getSize() << std::endl;

    q.dequeue();
    std::cout << "Elemen depan setelah dequeue: " << q.getFront() << std::endl;

    return 0;
}

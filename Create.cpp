#include<iostream>
#define MAX 8
using namespace std;

struct Queue{
    int array[MAX];
    int front, rear, count;
};

//rear = elemen terakhir
//count = jumlah elemen

void isiQueue(Queue* Q) {
    Q->front = 0;  // Mulai dari indeks 0
    Q->rear = 0;
    Q->count = 0;  // Belum ada elemen dalam queue
}

void TampilkanQueue(Queue* Q) {
    cout << "Queue berhasil dibuat!\n";
    cout << "Front: " << Q->front << endl;
    cout << "Rear: " << Q->rear << endl;
    cout << "Count: " << Q->count << endl;
}

int main() {
    Queue Q;                // Deklarasi queue
    isiQueue(&Q);          // Panggil fungsi dari alamat Q
    TampilkanQueue(&Q);   // cek status dari alamat Q
    return 0;
}
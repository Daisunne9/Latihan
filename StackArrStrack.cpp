#include <iostream>

#define MAX 5 // Ukuran maksimum stack

// Definisi struct untuk elemen stack
struct Process {
    int id;
    std::string name;
};

// Definisi struct untuk stack
struct Stack {
    Process arr[MAX]; // Array untuk menyimpan elemen stack
    int top;          // Menunjukkan indeks elemen teratas
};

// Inisialisasi stack
void initStack(Stack &s) {
    s.top = -1; // Menandakan stack kosong
}

// Fungsi untuk mengecek apakah stack kosong
bool isEmpty(Stack &s) {
    return s.top == -1;
}

// Fungsi untuk mengecek apakah stack penuh
bool isFull(Stack &s) {
    return s.top == MAX - 1;
}

// Fungsi untuk menambahkan elemen ke stack (push)
void push(Stack &s, Process p) {
    if (isFull(s)) {
        std::cout << "Stack penuh! Tidak bisa menambahkan elemen.\n";
        return;
    }
    s.arr[++s.top] = p; // Tambahkan elemen dan naikkan indeks top
}

// Fungsi untuk menghapus elemen dari stack (pop)
void pop(Stack &s) {
    if (isEmpty(s)) {
        std::cout << "Stack kosong! Tidak bisa menghapus elemen.\n";
        return;
    }
    s.top--; // Turunkan indeks top untuk menghapus elemen
}

// Fungsi untuk melihat elemen teratas (top)
Process top(Stack &s) {
    if (isEmpty(s)) {
        std::cout << "Stack kosong!\n";
        return {-1, ""}; // Mengembalikan nilai default jika kosong
    }
    return s.arr[s.top];
}

// Fungsi untuk menampilkan isi stack
void display(Stack &s) {
    if (isEmpty(s)) {
        std::cout << "Stack kosong!\n";
        return;
    }
    std::cout << "Isi stack:\n";
    for (int i = s.top; i >= 0; i--) {
        std::cout << "ID: " << s.arr[i].id << ", Name: " << s.arr[i].name << "\n";
    }
}

int main() {
    Stack s;
    initStack(s);

    // Menambahkan elemen ke stack
    push(s, {1, "Process A"});
    push(s, {2, "Process B"});
    push(s, {3, "Process C"});

    display(s);

    // Menghapus elemen
    pop(s);
    std::cout << "\nSetelah pop:\n";
    display(s);

    // Melihat elemen teratas
    Process p = top(s);
    std::cout << "\nElemen teratas: ID " << p.id << ", Name: " << p.name << "\n";

    return 0;
}

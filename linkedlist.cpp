#include<iostream>
using namespace std;

struct gerbong{
    int data;
    gerbong* next;
};

gerbong *baru;
gerbong *kepala = nullptr;
gerbong *ekor = nullptr;
gerbong *bantu;

void tambahgerbong(int nilai){
    baru = new gerbong;
    baru -> data = nilai;
    baru -> next = nullptr;
    
    if (kepala == nullptr){
        kepala = baru;
        ekor = baru;
    }
    else{
        ekor->next = baru;
        ekor = baru;
    }
}

void cetakGerbong(){
        bantu = kepala;
        while (bantu != nullptr) {
            cout << bantu->data << " -> ";
            bantu = bantu->next;
        }
        cout << "NULL" << endl;
}
    
int main() {
        tambahgerbong(10);
        tambahgerbong(20);
        tambahgerbong(30);
        tambahgerbong(40);
    
        cout << "Isi gerbong kereta: ";
        cetakGerbong();
    
        return 0;
}


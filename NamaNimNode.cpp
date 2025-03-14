#include<iostream>
using namespace std;

struct node{
    string nama;
    string nim;
    node* next;

    node(string xnama, string xnim){
        nama = xnama;
        nim = xnim;
        next = nullptr;
    }
};

int main(){
    node* data = new node("Muhammad Nazril Abdillah", "2430205030026");

    cout << "Nama: " << data->nama << endl;
    cout << "NIM: " << data->nim << endl;

    delete data;
    return 0;
}

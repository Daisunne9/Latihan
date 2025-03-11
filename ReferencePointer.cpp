#include<iostream>
using namespace std;

void fungsi(int *b){
    cout << " Nilai b: " << *b << endl;
    cout << "Alamat b: " << b << endl;
}

void kali(int *kalitiga){
    *kalitiga = *kalitiga * 3;
}

int main(){
    int a = 5;

    cout << " Nilai a: " << a << endl;
    cout << "Alamat a: " << &a << endl;
    fungsi(&a);
    kali(&a);
    cout << "Nilai a setelah dikali 3: " << a << endl;

    return 0;
}
#include<iostream>
using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main(){
    int a = 5;
    cout << "Nilai dari a: " << a << endl;
    cout << "Alamat dari a: " << &a << endl;
    
    fungsi(a);
    kuadrat(a);

    cout << "Nilai kuadrat dari b: " << a << endl;
}

void fungsi(int &b){
    cout << "Nilai dari b: " << b << endl;
    cout << "Alamat dari b: " << &b << endl;
}

void kuadrat(int &nilai){
    nilai = nilai * nilai;
}
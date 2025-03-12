#include<iostream>
using namespace std;

struct mhs{
    string nama;
    string nim;
};

int main(){
    mhs data;
    mhs *ptrdata = &data;

    data.nama = "Nazril";
    data.nim = "230205030026";

    system("cls");

    cout << "Nama anda: " << data.nama << endl;
    cout << "NIM anda: " << data.nim << endl;

    cout << "\nNama anda: " << (*ptrdata).nama << endl;
    cout << "NIM anda: " << (*ptrdata).nim << endl;

    cout << "\nNama anda: " << ptrdata->nama << endl;
    cout << "NIM anda: " << ptrdata->nim << endl;

}


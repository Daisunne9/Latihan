#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;

    node(int val){
        data = val;
        next = nullptr;
    }
};

int main(){
    node* gerbong1 = new node(10);
    node* gerbong2 = new node(20);
    gerbong1->next = gerbong2;

    node* temp = gerbong1;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    delete gerbong1;
    delete gerbong2;
}
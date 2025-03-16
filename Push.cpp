#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> g;

    g.push(10);
    g.push(20);
    g.push(50);

    //menghapus elemen teratas
    g.pop();

    //melihat elemen teratas
    cout << "Top elemen: " << g.top() <<endl;

    if(g.empty()){
        cout << "Stack kosong" << endl;
    }
    else {
        cout << "Stack masih tersedia" << endl;
    }

    cout << "Stack size: " << g.size() << endl;
    return 0;

}
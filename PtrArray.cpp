#include <iostream>
using namespace std;

int main(){
    int data[] = {1, 2, 3, 4, 5};
    int *ptrdata;

    ptrdata = data;
    for (int i = 0; i < 5; i++){
        cout << "Data-" << i + 1 << " : " << data[i] << endl;
    }
    
}
//Enqueue berfungsi untuk menambah elemen ke queue

#include <iostream>
#include <queue>

int main(){
    std::queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Bilangan Pertama: " << q.front() << std::endl;
    std::cout << "Bilangan Terakhir: " << q.back() << std::endl;

    //mengecek apakah queue kosong!!
    if(q.empty()){
        std::cout << "Queue kosong!!" << std::endl;
    }
    else{
        std::cout << "Queue berisi elemen!!" << std::endl;
    }

    //menampilakn ukuran queue
    std::cout << "Ukuran Queue: " << q.size() << std::endl;

    //Dequeue (menghapus elemen)
    q.pop();
    std::cout << "Elemen depan setelah DeQueue: " << q.front() << std::endl;

    return 0;
}

//bisa melakukan enqueue dan dequeue dari depan maupun belakang

#include<iostream>
#include<deque>

int main(){
    std::deque<int>q;
    q.push_front(10);   //[10]
    q.push_back(20);    //[10,20]
    q.push_front(5);    //[5,10,20]

    std::cout << "Bilangan pertama: " << q.front() <<std::endl;
    std::cout << "Bilangan terakhir: " << q.back() <<std::endl;
}

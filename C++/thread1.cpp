#include <iostream>
#include <thread>

class MyFunctor
{
public:
    void operator()(int i) {
        std::cout << i << "functor\n";
    }
};

int main()
{
    MyFunctor fnctor;
    std::thread t(fnctor, 1);
    std::cout << "main thread\n";
    t.join();
    return 0;
}

//g++ thread1.cpp -o thread1 -std=c++11 -pthread

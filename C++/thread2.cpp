#include <iostream>
#include <thread>

using namespace std;

class Task
{
public:
    void operator()(int i)
    {
        cout << i << endl;
    }
};

int main()
{
    
    for (int i = 0; i < 4; i++)
    {
        Task task;
        thread t(task, i);
        t.detach(); 
    }
}

//g++ thread2.cpp -o thread2 -std=c++11 -pthread

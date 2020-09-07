#include <iostream>
#include <boost/pool/object_pool.hpp>

class person
{
    public:
        int age;
        person(int _age = 0) : age(_age) {
        
        };
};
 
 
int main()
{
    boost::object_pool<person> pl;     //定义这个类的内存池
    person *p = pl.malloc();           //调用malloc函数 返回一个类类型的内存块 初始化该类型的指针
    
    std::cout << p->age << std::endl;  //默认是0
    
    p = pl.construct(100);             //构造一个新对象。括号中的参数做为类构造方法的参数，相关于new person(100)。
    std::cout<< p->age << std::endl;   //输出100
    return 0;
}

//g++ boost_object_pool.cpp -I./boost/output/include -L./boost/output/lib -lboost_system

/*
内存池(Memory Pool)是一种内存分配方式。通常我们习惯直接使用new、malloc等API申请分配内存，这样做的缺点在于：由于所申请内存块的大小不定，当频繁使用时会造成大量的内存碎片并进而降低性能。
内存池则是在真正使用内存之前，先申请分配一定数量的、大小相等(一般情况下)的内存块留作备用。当有新的内存需求时，就从内存池中分出一部分内存块，若内存块不够再继续申请新的内存。这样做的一个显著优点是尽量避免了内存碎片，使得内存分配效率得到提升。

<p>1、 boost::object_pool是用于类实例的内存池，【析构时对所有已经分配的内存块调用析构函数】。</p>

<p>2、常用函数construct从内存池中创建一块对象内存，（默认）最多支持三个参数；destroy()用来销毁对象。</p>

<p>3、函数调用失败不会抛出异常，会返回空指针，所以我们可以使用空指针进行判断是否成功。</p>
*/

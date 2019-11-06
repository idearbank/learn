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
    
    p = pl.construct(100);             //构造一个新对象
    std::cout<< p->age << std::endl;
    return 0;
}

//g++ boost_object_pool.cpp -I./boost/output/include -L./boost/output/lib -lboost_system

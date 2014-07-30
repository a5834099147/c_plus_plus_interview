#include <iostream>

using namespace std;

class Test
{
private:
    int m_value;

public:
    void print1()
    {
        cout << "Hello world";
    }

    virtual void print2()
    {
        ///< 虽然不访问实例内部属性, 但是访问虚函数需要通过虚表, 所以需要 this 指针
        cout << "Hello world";
    }
};

int main()
{
    Test *test = NULL;

    test->print1();

    ///< 需要根据 this 指针中的虚表指针得到虚函数表, 在通过虚函数表找到函数地址
    test->print2();

    return 0;
}

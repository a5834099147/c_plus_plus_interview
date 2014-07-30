#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        Print();
    }

    virtual ~A()
    {
        PrintDelete();
    }

    virtual void Print()
    {
        cout << "A is constructed" << endl;
    }

    virtual void PrintDelete()
    {
        cout << "A is delete" << endl;
    }
};

class B: public A
{
public:
    B() : A()
    {
        Print();
    }

    virtual ~B()
    {
        PrintDelete();
    }

    virtual void Print()
    {
        cout << "B is constructed" << endl;
    }

    virtual void PrintDelete()
    {
        cout << "B is delete" << endl;
    }
};

int main()
{
    ///< 在构造B的构造函数时, 先会调用B的基类即A的构造函数,
    ///< 然后调用A构造函数里. 面调用Print().由于此时此时实例的类型B的部分还没有构造好,本质上只是A的实例
    ///< 他的虚函数指针指向的是类型A的虚表
    A* pA = new B();

    ///< 析构函数必须是虚函数
    delete pA;

    return 0;
}

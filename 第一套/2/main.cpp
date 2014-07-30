#include <iostream>

using namespace std;

class A
{
    ///< 计算实例大小时, 实际要计算虫洞大小(内存对齐)
};

class B
{
    B(){};
    ~B(){};
};

class C
{
    C(){}
    ///< 有虚表指针
    virtual ~C(){}
};


int main()
{
    ///< 本不占空间, 但是为了避免出现实例占用相同的位置, 故值为1
    cout << sizeof(A) << ' ' << sizeof(B) << ' ' << sizeof(C) << endl;
    return 0;
}

#include <iostream>

using namespace std;

class A
{
public:
    virtual void Fun(int number = 10)
    {
        cout << "A::Fun with number " << number;
    }
};

class B: public A
{
public:
    virtual void Fun(int number = 20)
    {
        cout << "B::Fun with number " << number;
    }
};

int main()
{
    B b;
    A& a = b;
    ///< ȱʡ�����Ǿ�̬��, �ڱ���������
    a.Fun();
    return 0;
}

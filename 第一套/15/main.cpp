#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout << "A is created." << endl;
    }

    ~A()
    {
        cout << "A is deleted." << endl;
    }
};

class B: public A
{
public:
    B()
    {
        cout << "B is created." << endl;
    }

    ~B()
    {
        cout << "B is delete." << endl;
    }
};

int main()
{
    A* pA = new B();
    delete pA;
    return 0;
}

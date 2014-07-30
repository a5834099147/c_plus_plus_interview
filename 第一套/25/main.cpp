#include <iostream>

using namespace std;

class Base
{
public:
    void print()
    {
        doPrint();
    }

private:
    virtual void doPrint()
    {
        cout << "Base::doPrint" << endl;
    }
};

class Derived : public Base
{
private:
    virtual void doPrint()
    {
        cout << "Derived::doPrint" << endl;
    }
};

int main()
{
    Base b;
    b.print();

    Derived d;
    d.print();
    return 0;
}

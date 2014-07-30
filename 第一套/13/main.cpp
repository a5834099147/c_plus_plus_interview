#include <iostream>

using namespace std;

class A
{
private:
    int value;

public:
    A(int n)
    {
        value = n;
    }

    ///< A(A& other) 是由于传入的是一个临时的无名参数
    A(const A& other)
    {
        value = other.value;
    }

    void Print()
    {
        cout << value << endl;
    }
};

int main()
{
    A a = 10;
    A b = a;
    b.Print();

    return 0;
}

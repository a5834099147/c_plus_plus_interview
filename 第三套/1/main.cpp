#include <iostream>

using namespace std;

class Test
{
public:
    Test() :m_value(0)
    {

    }


    Test& operator++()
    {
        m_value += 1;
        return *this;
    }

    Test operator++(int);
    {
        Test tmp = *this;
        ++(*this);
        return tmp;
    }

    Test& operator+=(int add)
    {
        m_value += add;
        return *this;
    }

    Test operator+(int add)
    const
    {
        Test tmp = *this;
        return tmp += add;
    }

    Test& operator+=(const Test& add)
    {
        m_value += add.m_value;
        return *this;
    }

    Test operator+(const Test& add)
    const
    {
        Test tmp = *this;
        return tmp += add;
    }

    Test& operator=(const int& other)
    {
        m_value = other;
        return *this;
    }

    Test& operator=(const Test& other)
    {
        if (&other != this)
        {
            m_value = other.m_value;
        }

        return *this;
    }

    friend ostream& operator<<(ostream& out, Test& other)
    {
        out << other.m_value;
        return out;
    }

private:
    int m_value;
};

int main()
{
    int a = 0;
    a += (a++);
    cout << a << endl;

    Test test;
    test += (test++);
    cout << "Test: " << test << endl;

    a = 0;
    a += (++a);
    cout << a << endl;

    test = 0;
    test += (++test);
    cout << "Test: " << test << endl;

    a = 4;
    ///< a++ 不是有效的左值
    //(a++) += 4;

    test = 0;
    (test++) += 4;
    cout << "Test: " << test << endl;

    a = 0;
    (++a) += (a++);
    cout << a << endl;

    test = 0;
    (++test) += (test++);
    cout << "Test: " << test << endl;

    return 0;
}

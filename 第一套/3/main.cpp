#include <iostream>

using namespace std;

class Test
{
private:
    int m_value;

public:
    Test(int number)
    {
        m_value = number;
    }

    void print1()
    {
        cout << "Hello world";
    }

    void print2()
    {
        cout << m_value;
    }
};

int main()
{
    Test *test = NULL;
    ///< 函数地址固定, 传入的 this 指针没有被使用
    test->print1();
    ///< 需要 this 指针才能得知 m_value 的值故出错
    test->print2();
    return 0;
}

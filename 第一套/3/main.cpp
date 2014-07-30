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
        ///< 不访问实例内部属性, 故不需要 this指针
        cout << "Hello world";
    }

    void print2()
    {
        ///< 要访问内部属性 m_value, 故需要 this 指针
        cout << m_value;
    }
};

int main()
{
    Test *test = NULL;
    ///< 函数地址固定, 传入的 this 指针没有被使用
    test->print1();
    ///< 需要 this 指针才能得知 m_value 的值故出错(空指针异常)
    test->print2();
    return 0;
}

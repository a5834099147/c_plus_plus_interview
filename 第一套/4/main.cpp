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
        cout << "Hello world";
    }
};

int main()
{
    Test *test = NULL;

    test->print1();

    ///< ��Ҫ���� this ָ���е����ָ��õ��麯����, ��ͨ���麯�����ҵ�������ַ
    test->print2();

    return 0;
}

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
        ///< ������ʵ���ڲ�����, �ʲ���Ҫ thisָ��
        cout << "Hello world";
    }

    void print2()
    {
        ///< Ҫ�����ڲ����� m_value, ����Ҫ this ָ��
        cout << m_value;
    }
};

int main()
{
    Test *test = NULL;
    ///< ������ַ�̶�, ����� this ָ��û�б�ʹ��
    test->print1();
    ///< ��Ҫ this ָ����ܵ�֪ m_value ��ֵ�ʳ���(��ָ���쳣)
    test->print2();
    return 0;
}

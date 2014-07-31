#include <iostream>

using namespace std;

class A
{
private:
    int value;

public:
	///< û����� explicit �ؼ��ֹʿ�����ʽת�� int Ϊ A ����
    A(int n)
    {
        value = n;
    }

	///< A(A& other) �����ڸ��ƹ��캯�����봫������
    ///< A(const A& other) �����ڴ������һ����ʱ����������
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
    A a = 10;   ///< ��������һ�� A(10) ��������
    A b = a;
    b.Print();

    return 0;
}

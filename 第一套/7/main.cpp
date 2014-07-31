#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        Print();
    }

    virtual ~A()
    {
        PrintDelete();
    }

    virtual void Print()
    {
        cout << "A is constructed" << endl;
    }

    virtual void PrintDelete()
    {
        cout << "A is delete" << endl;
    }
};

class B: public A
{
public:
    B() : A()
    {
        Print();
    }

    virtual ~B()
    {
        PrintDelete();
    }

    virtual void Print()
    {
        cout << "B is constructed" << endl;
    }

    virtual void PrintDelete()
    {
        cout << "B is delete" << endl;
    }
};

int main()
{
    ///< �ڹ���B�Ĺ��캯��ʱ, �Ȼ����B�Ļ��༴A�Ĺ��캯��,
    ///< Ȼ�����A���캯����. �����Print().���ڴ�ʱ��ʱʵ��������B�Ĳ��ֻ�û�й����,������ֻ��A��ʵ��
    ///< �����麯��ָ��ָ���������A�����
    A* pA = new B();

    ///< ���������������麯��
    delete pA;

    return 0;
}

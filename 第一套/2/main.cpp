#include <iostream>

using namespace std;

class A
{
    ///< ����ʵ����Сʱ, ʵ��Ҫ����涴��С(�ڴ����)
};

class B
{
    B(){};
    ~B(){};
};

class C
{
    C(){}
    ///< �����ָ��
    virtual ~C(){}
};


int main()
{
    ///< ����ռ�ռ�, ����Ϊ�˱������ʵ��ռ����ͬ��λ��, ��ֵΪ1
    cout << sizeof(A) << ' ' << sizeof(B) << ' ' << sizeof(C) << endl;
    return 0;
}

#include <iostream>
#include <cstdio>

using namespace std;

void func(void);

void func(void)
{
    unsigned int a = 6;
    int b = -20;

    ///< �����ʽ�д����з������ͺ��޷�������ʱ���еĲ��������Զ�ת��Ϊ�޷�������
    (a + b > 6) ? puts(">6") : puts("<6");
}

int main()
{
    func();
    return 0;
}

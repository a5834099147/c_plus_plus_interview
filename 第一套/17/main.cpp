#include <iostream>

using namespace std;

char* GetString1()
{
    ///< ջ�Ϸ���ռ�
    char p[] = "Hello World";
    return p;
}

char* GetString2()
{
    ///< ������
    char *p = "Hello World";
    return p;
}

int main()
{
    cout << "GetString1 return " << GetString1() << endl;
    cout << "GetString2 return " << GetString2() << endl;

    return 0;
}

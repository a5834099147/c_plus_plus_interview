#include <iostream>

using namespace std;

char* GetString1()
{
    ///< 栈上分配空间
    char p[] = "Hello World";
    return p;
}

char* GetString2()
{
    ///< 常量区
    char *p = "Hello World";
    return p;
}

int main()
{
    cout << "GetString1 return " << GetString1() << endl;
    cout << "GetString2 return " << GetString2() << endl;

    return 0;
}

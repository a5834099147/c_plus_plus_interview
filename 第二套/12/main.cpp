#include <iostream>
#include <cstdio>

using namespace std;

void func(void);

void func(void)
{
    unsigned int a = 6;
    int b = -20;

    ///< 当表达式中存在有符号类型和无符号类型时所有的操作数都自动转换为无符号类型
    (a + b > 6) ? puts(">6") : puts("<6");
}

int main()
{
    func();
    return 0;
}

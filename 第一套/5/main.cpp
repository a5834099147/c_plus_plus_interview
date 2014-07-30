#include <iostream>

using namespace std;

class Test
{
public:
    virtual static void test()
    {
        ///< 编译不通过, 原因是 static 类动作没有 this 指针, 故无法查询虚表
        ///< 使用 static 修饰的类成员函数无需实例化, 没有实例则没有 this 指针, 无法查询虚表
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

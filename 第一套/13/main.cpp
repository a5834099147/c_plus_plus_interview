#include <iostream>

using namespace std;

class A
{
private:
    int value;

public:
	///< 没有添加 explicit 关键字故可以隐式转换 int 为 A 类型
    A(int n)
    {
        value = n;
    }

	///< A(A& other) 是由于复制构造函数必须传入引用
    ///< A(const A& other) 是由于传入的是一个临时的无名参数
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
    A a = 10;   ///< 首先生成一个 A(10) 无名对象
    A b = a;
    b.Print();

    return 0;
}

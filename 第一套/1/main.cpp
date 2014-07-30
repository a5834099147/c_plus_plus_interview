///< 不能同时使用 static 与 const 修饰类的成员函数

///< 以下情况不能有 CV限定符号, c++中CV限定符为 valotile 和 const
///< 普通函数和静态成员函数

///< 编译器为了实现 const 修饰的成员函数不被修改会在函数中添加一个隐藏的 const this*, 静态函数没有this 指针

struct Test {
int a;

static int get_a(void)
const
{
    return 1;
}

};

int main()
{
    return 0;
}

#include <iostream>

using namespace std;

int fun(int)
{
    return 0;
}

int main()
{
    int a; ///< 一个整形数
    int *b = &a; ///< 一个指向整形数的指针
    int **c = &b; ///< 一个指向指针的指针, 它所指向的指针是一个整形数
    int d[10]; ///< 一个有10个整形数的数组
    int* e[10]; ///< 一个有10个指针的数组
    int(*f)[10] = &d; ///< 一个指向有10个整形数数组的指针
    int(*g)(int) = fun; ///< 一个指向函数的指针, 该函数有一个整形参数, 有一个整形参数的返回值
    int(*h[10])(int);   ///< 一个有10个指针的数组, 该指针指向一个如g的指针

    cout << "Hello world!" << endl;
    return 0;
}

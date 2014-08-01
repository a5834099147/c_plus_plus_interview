#include <iostream>

using namespace std;

///< 自增, 自减符号会出错
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main()
{
    int a = 5;
    cout << MIN(1, 10) << endl;
    return 0;
}

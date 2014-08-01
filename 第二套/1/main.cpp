#include <iostream>

using namespace std;

///< 预编译期会计算常熟表达式, 故写为该式子易懂且无代价
///< UL表示 unsigned long
#define SECONDS_PER_YEAR (60*60*24*365UL)

int main()
{
    cout << SECONDS_PER_YEAR << endl;
    return 0;
}

#include <iostream>

using namespace std;

struct Point3D
{
    int x;
    int y;
    int z;
};

int main()
{
    Point3D *pPoint = NULL;
    ///< 计算偏移量
    int offset = (int)(&(pPoint)->z);

    cout << offset << endl;
    return 0;
}

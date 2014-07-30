#include <iostream>

using namespace std;

class A
{

};

class B
{
    B(){};
    ~B(){};
};

class C
{
    C(){}
    virtual ~C(){}
};


int main()
{
    ///< 本不占空间, 但是为了避免出现实例占用相同的位置, 故值为1
    cout << sizeof(A) << ' ' << sizeof(B) << ' ' << sizeof(C) << endl;
    return 0;
}

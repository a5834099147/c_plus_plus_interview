#include <iostream>

using namespace std;

bool Fun1(char* str)
{
    cout << str << ' ';
    return false;
}

bool Fun2(char* str)
{
    cout << str << ' ';
    return true;
}

int main()
{
    bool res1, res2;

    res1 = (Fun1("a") && Fun2("b")) || (Fun1("c") || Fun2("d"));
    res2 = (Fun1("a") && Fun2("b")) && (Fun1("c") || Fun2("d"));

    return res1 || res2;
}

#include <iostream>

using namespace std;

int SizeOf(char pString[])
{
    return sizeof(pString);
}

int main()
{
    char* pString1 = "google";
    int size1 = sizeof(pString1);
    int size2 = sizeof(*pString1);

    char pString2[100] = "google";
    int size3 = sizeof(pString2);
    int size4 = SizeOf(pString2);

    cout << size1 << ' ' << size2 << ' ' << size3 << ' ' << size4 << endl;

    return 0;
}

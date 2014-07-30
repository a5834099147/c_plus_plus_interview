#include <iostream>

using namespace std;

int SizeOf(char pString[])
{
    return sizeof(pString);
}

int main()
{
    char* pString1 = "google";
    ///< 指针的大小
    int size1 = sizeof(pString1);
    ///< 由于指针类型为 char* 故其所指对象被翻译为 char 故得到的为 char 的所占字节数
    int size2 = sizeof(*pString1);

    char pString2[100] = "google";
	///< 数组所占内存的大小
    int size3 = sizeof(pString2);
	///< 由于传参, 数组退化为指针
    int size4 = SizeOf(pString2);

    cout << size1 << ' ' << size2 << ' ' << size3 << ' ' << size4 << endl;

    return 0;
}

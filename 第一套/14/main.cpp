#include <iostream>

using namespace std;

int SizeOf(char pString[])
{
    return sizeof(pString);
}

int main()
{
    char* pString1 = "google";
    ///< ָ��Ĵ�С
    int size1 = sizeof(pString1);
    ///< ����ָ������Ϊ char* ������ָ���󱻷���Ϊ char �ʵõ���Ϊ char ����ռ�ֽ���
    int size2 = sizeof(*pString1);

    char pString2[100] = "google";
	///< ������ռ�ڴ�Ĵ�С
    int size3 = sizeof(pString2);
	///< ���ڴ���, �����˻�Ϊָ��
    int size4 = SizeOf(pString2);

    cout << size1 << ' ' << size2 << ' ' << size3 << ' ' << size4 << endl;

    return 0;
}

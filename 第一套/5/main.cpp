#include <iostream>

using namespace std;

class Test
{
public:
    virtual static void test()
    {
        ///< ���벻ͨ��, ԭ���� static �ද��û�� this ָ��, ���޷���ѯ���
        ///< ʹ�� static ���ε����Ա��������ʵ����, û��ʵ����û�� this ָ��, �޷���ѯ���
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

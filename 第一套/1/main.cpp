///< ����ͬʱʹ�� static �� const ������ĳ�Ա����

///< ������������� CV�޶�����, c++��CV�޶���Ϊ valotile �� const
///< ��ͨ�����;�̬��Ա����

///< ������Ϊ��ʵ�� const ���εĳ�Ա���������޸Ļ��ں��������һ�����ص� const this*, ��̬����û��this ָ��

struct Test {
int a;

static int get_a(void)
const
{
    return 1;
}

};

int main()
{
    return 0;
}

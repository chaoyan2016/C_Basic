#include"iostream"
using namespace std;

class AA
{
public:
	AA()//�޲ι��캯�� Ĭ�Ϲ��캯��
	{
		cout << "���ǹ��캯�����Զ���������" << endl;
	}
	AA(const AA &obj)
	{
		cout << "��Ҳ�ǹ��캯��������ͨ������һ������obj2������ʼ���Լ�" << endl;
	}
	~AA()//�޲ι��캯�� Ĭ�Ϲ��캯��
	{
		cout << "���������������Զ���������" << endl;
	}
protected:
private:
	int a;
};
//�����һ����̨
void objPlay()
{
	AA a1;//��������
	//��ֵ���캯���ĵ�һ��Ӧ�ó���
	//���ö���1 ��ʼ�� ����2
	AA a2 = a1;//�����������ʼ��
	a2 = a1;//��a1��=�Ÿ�a2,�����������ṩ��ǳcopy
}
void main()
{
	objPlay();
	//printf("A:%d \n", sizeof(A));
	//printf("C:%d \n", sizeof(C));
	//B b1;
}
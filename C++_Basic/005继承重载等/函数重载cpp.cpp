#include<iostream>
using namespace std;
class printData
{
public:
	void print(int i)
	{
		cout << "����Ϊ��" << i << endl;
	}
	void print(double f)
	{
		cout << "������Ϊ��" << f << endl;
	}
	void print(char c[])
	{
		cout << "�ַ���Ϊ��" << c << endl;
	}
};
int main(void)
{
	printData pd;
	//�������
	pd.print(5);
	//���������
	pd.print(5.1234);
	//����ַ���
	char c[] = "i love coding";
	pd.print(c);
	return 0;
	//�Զ�ѡ��������������
}
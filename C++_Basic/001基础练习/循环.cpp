#include <iostream>
using namespace std;

int main1()
{
	// �ֲ���������
	// �ֲ���������
	int a = 10;

	// do ѭ��ִ��
	do
	{
		cout << "a ��ֵ��" << a << endl;
		a = a + 1;
		if (a > 15)
		{
			// ��ֹѭ��
			break;
		}
	} while (a < 20);

	return 0;
}
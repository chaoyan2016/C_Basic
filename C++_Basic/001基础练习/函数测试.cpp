#include<iostream>
using namespace std;
int HeartBeat = 0;
int *p;
void  Calculate()
{
	HeartBeat++;
	p = &HeartBeat;
	cout << "������ĿΪ��" << HeartBeat << endl;
}
int main()
{
	for (int i = 0; i < 100; i++)
	{
		Calculate();
	}
}
//¼����Ƶ��ѡ��
//1������¼��һ����Ƶ������TREACEʹ�ã��������������ʹ�á�
//2��ʹ��һ�����ӽ������ʹ�÷�����
//3��ָ�������Ҫȡһ����ַ��
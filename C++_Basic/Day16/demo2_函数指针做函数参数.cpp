//#include"string.h"
#include"string.h"
#include"stdio.h"
#include"stdlib.h"
int add(int a, int b)
{
	int c;
	c = a + b;
	return c;
}
//д������˺�ִ��������˷ֿ���
int MyOP(int(*MyAdd)(int, int))
{
	add(1, 2);
	MyAdd(3, 4);
	return 0;
}
//1�����Ǻ�����ڵ�ַ�������ú�������
//2ͬʱ�������ͣ������˽ӿڵ�Լ�����������������͵�Լ����
//��ӳ�������ϡ���������Ҫ�أ�����������ֵ��
//ָ������������˼�� ��
typedef int(*PMyFuncType)(int, int);
int MyOP2(PMyFuncType)
void main()
{
	int(*pAdd)(int, int);
	pAdd = add;

	MyOP2();
}
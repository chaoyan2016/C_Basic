#include<iostream>
using namespace std;
//static���α�����ʱ�򣬱�����һ��״̬����
//int j()
//{
//	static int a = 10;
//	a++;
//	printf("a:%d \n", a);
//	return a;
//
//}

int& j1()//�������ͣ��൱�ڷ���һ����ַ��������Ӷ�a��ֵ
{
	static int a = 10;
	a++;
	printf("a:%d \n", a);
	return a;
}
int *j2()  //ָ�����ͣ����������һ����ַ
{
	static int a = 10;
	a++;
	cout << "a:" << a << endl;
	return &a;//����a�ĵ�ַ����ֵ
	//�����*��j2()��Ϊȥ����ڴ��ַ�����и�ֵ
}

int g1(int *p)
{
	*p = 100;
	return *p;
}

int& g2(int *p)
{
	*p = 100;
	return *p;
}

void main1()
{
	//j()����������һ����ֵ��û���ڴ��ַ�����ܵ���ֵ��
	//11=100��
	//*��a>b?&a:&b)=111;
	//�������õĺ�������ֵ��ʱ�򣬱��뷵��һ������
	j1() = 100;
	j1();
	*(j2()) = 200;//�൱�����ǳ���Ա�ֹ���������ֵ������
	j2();
}
void main()
{
	int a1 = 10;
	a1 = g2(&a1);
	int &a2 = g2(&a1); //��������
	cout << "a1:" << a1 << endl;
	cout << "a2:" << a2 << endl;
}
#include<iostream>
using namespace std;
void main()
{
	const int a = 10;  //const����ı������޷����޸�
	int *p = (int *)&a;
	*p = 11;
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;//*pʵ��û��ȡ��a�ĵ�ַ
}
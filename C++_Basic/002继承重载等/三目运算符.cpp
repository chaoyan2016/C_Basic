#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	(a < b ? a : b)=30;  //C++����Ŀ�����������Ϊ��ֵ�����ص��Ǳ�������
	cout << "a=" << a << endl;  //��ֵ�����ڴ�ռ�ģ��Ĵ���û���ڴ�ռ䡣
	cout << "b=" << b << endl;
}
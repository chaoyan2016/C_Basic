/********************************************************
author:minx
function:calculate
version:v1.0
time:2010-3-29
*********************************************************/
#include<iostream>
using namespace std;//c++�������ռ�
class circle //Ϊһ���࣬ҲΪһ���ṹ��
{
public:
	double r;//��ʱΪһ���������Ҳ��һ��������ֵ
	double pi = 3.1415926;
	double area = pi * r*r;
	double getS()
	{
		return area = 3.14*r*r;
	}
};
int main()
{
	circle pi;
	cout << "������뾶r:" << endl;
	cin >> pi.r;//����뾶
	pi.getS();//����뾶�����¼������ȷ�����
	cout << pi.area << endl;
	system("pause");
	return 0;
}
/**************************************************************
author:minx
function:calculate area
time:2019-3-29
**************************************************************/
#include<iostream>
using namespace std;
//���б����ڳ�ʼ����ʱ������ʼ��������������һ����ֵ��
double m_r=0;   //�뾶,��Ա����
double m_s=0;  //�������Ա����
double pi = 3.14159265458;
typedef  struct //�ṹ��������Է�װ��Ӧ�ķ���
{
	double getarea()     
	{
		m_s = pi * m_r*m_r;
		return m_s;        //���ض�Ӧ�������ֵ
	}
}function;
int main()
{

	function fc;   //���Ͷ��������ֻ������ڴ�
	cout << "������Բ�İ뾶��" << endl;
	cin >> m_r;  //����뾶��ֵ
	double area = 0;
	//area = fc.getarea;
	cout << "Բ�����Ϊ��" << fc.getarea() << endl;
}
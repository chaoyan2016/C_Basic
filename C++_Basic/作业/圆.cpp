#include<iostream>
using namespace std;
class Point
{
public:
	int p_x;//��ĺ�����
	int p_y;//���������

	int getX(int p_x)
	{
		cin >> p_x;
		return  p_x;
	}
	int getY(int p_y)
	{
		cin >> p_y;
		return p_y;
	}

};
Point p1;
Point p2;
int Calculate()//��������ľ���
{
	float distance;
	distance = sqrt((p1.getX(p_x) - p2.getX(p_x)) ^ 2 + (p2.getY(p_y) - p2.getY(p_y) ^ 2);//
	return distance;
	//��ȫ����д�����Ǻܲ��������ø��Ӷ���д���������
}
class  Circle
{
public:
	int c_x;//Բ��
	int c_r;//�뾶
};
Point p1;
Point p2;

int main()
{
	cout << "��������꣺" << endl;
	p1.getX();
	cout << "���������꣺" << endl;
	p1.getY();
	cout << "����ľ���Ϊ��" << Calculate() << endl;
}
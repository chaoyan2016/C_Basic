#include<iostream>
using namespace std;
class Point
{
public:
	int p_x;//��ĺ�����
	int p_y;//���������
	float distance;
	int getX()
	{
		cin >> p_x;
		return  p_x;
	}
	int getY()
	{
		cin >> p_y;
		return p_y;
	}
	int Calculate()
	{
		distance = sqrt(p_x*p_x + p_y * p_y);//���󣬺��ڸ���
		return distance;
	}

};
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
	cout << "��������꣺" <<endl;
	p1.getX();
	cout << "���������꣺"<<endl;
	p1.getY();
	cout << "����ľ���Ϊ��" << p1.Calculate() << endl;


}
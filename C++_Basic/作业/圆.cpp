/*************************************
author:min
time:2019-4-16
**************************************/
#include<iostream>
using namespace std;
//����
class Point
{
public:
	void setCenter(int x, int y)
	{
		m_x = x;
		m_y = y;
	}
	//���������һ����֮ŷ����þ���ķ���
	double getDistance(Point &another)  //��������ֻ�Ǹ������ڲ�ʹ�ã�ʹ�ö���.xʱ��һ���ڶ���ǰ��ȡ&
	{//Point��ʾӦ���Ƿ���һ���㣬Ȼ��&Point
		int d_x = m_x - another.m_x;
		int d_y = m_y - another.m_y;
		double distance = sqrt(d_x*d_x + d_y * d_y);

		return distance;
	}
private:
	int m_x;
	int m_y;
};
class  Circle
{
public:
	Point p3;//Բ������
	Point p4;//Բ������
	//�е�����Ժͷ���

	int c_r;//�뾶
	//ͨ������������
	int setCircleCenter()
	{
	}
	int  setR(int r)
	{
		c_r = r;
		return c_r;
	}
	int getDoubleR(Circle &another)
	{
		int sumR;
		sumR = c_r + another.c_r;
		return sumR;
	}
	//�������
};

int main()
{
	Point p1;
	Point p2;
	Point p4;
	//ͨ�����ù̶����ֵ�������ֶ���������ֵ
	int x = 0, y = 0;

	cout << "�����һ��������꣺" << endl;
	cin >> x >> y;
	p1.setCenter(x, y);//�ֱ𷵻�p1��m_x��m_y

	cout << "����ڶ���������꣺" << endl;
	cin >> x >> y;
	p2.setCenter(x, y);//�ֱ𷵻�p2m_x��m_y

	p1.getDistance(p2);//���ؼ���ľ���Ľ��

	cout << "����ľ���Ϊ��" << p1.getDistance(p2) << endl;;
	Circle c1;
	Circle c2;

	int r1 = 0;
	int r2 = 0;
	cout << "�����һ��Բ�İ뾶:" << endl;
	cin >> r1;
	c1.setR(r1);

	cout << "����ڶ���Բ�İ뾶:" << endl;
	cin >> r2;
	c1.setR(r2);

	int c_distance = 0;
	c_distance = c1.p3.getDistance(p4);
	if (c_distance > c1.getDoubleR(c2))
	{
		cout << "����Բ����" << endl;
	}
	else if (c_distance < c1.getDoubleR(c2))
	{
		cout << "����Բ�ཻ" << endl;
	}
}
//���̣��ҿ���һ����Ҳ��֪��	double getDistance(Point &another)��ô���ô��ݲ���
//��һֱ����	p1.getDistance(Point &p2);ʼ�ձ�������ǳ����ϵĳ��򣬷��֣�Point &another)ֱ��
//	p1.getDistance(p2);�Ϳ��Ե��ã��������ִ�ָ������ĺ������Ҹ�����֪����ε��á��һ�����Ҫ�Լ�������㣬����
//ѭ�򽥽��㡣���Ƕ�����������֮���������Լ��Ľ���ѭ�򽥽�����ȴ����׿��á�
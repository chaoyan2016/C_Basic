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
public:
	int m_x; //����Ϊpublic�󣬿��Ա���������á�private���ɱ���������á�
	int m_y;
};
class  Circle
{
public:
	Point p1;//Բ������
	Point p2;//Բ������
	//�е�����Ժͷ���

	int c_r;//�뾶
	//ͨ������������
	int  setR(int r)
	{
		c_r = r;
		return c_r;
	}
	void setCenter(int x, int y)
	{
		p0.setCenter(x, y);
	}
	bool isIntersection(Circle &another)
	{
		int r = m_r + another.m_r;
		double distance = p0.getDistance(another.p0);
		if (distance <= rr)
		{
			return true;
		}
		else
		{
			return false;
		}
	private:
		int m_r;
		Point p0;
	}
	int getSumR(Circle &another)
	{
		int sumR;
		sumR = c_r + another.c_r;
		return sumR;
	}
	//�������
};

int main()
{
	//��һ���������һ����ľ���
	Point p1;
	Point p2;

	//ͨ�����ù̶����ֵ�������ֶ���������ֵ
	int x = 0, y = 0;

	cout << "�����һ��������꣺" << endl;
	cin >> x >> y;
	p1.setCenter(x, y);//�ֱ𷵻�p1��m_x��m_y

	cout << "����ڶ���������꣺" << endl;
	cin >> x >> y;
	p2.setCenter(x, y);//�ֱ𷵻�p2��m_x��m_y

	p1.getDistance(p2);//���ؼ���ľ���Ľ��

	cout << "����ľ���Ϊ��" << p1.getDistance(p2) << endl;;

	//������Բ�Ƿ���ཻ
	Circle c1;
	Circle c2;

	int r1 = 0;
	int r2 = 0;
	cout << "�����һ��Բ�İ뾶:" << endl;
	cin >> r1;
	c1.setR(r1);

	cout << "����ڶ���Բ�İ뾶:" << endl;
	cin >> r2;
	c2.setR(r2);

	float c_distance = 0;
	c_distance = c1.p1.getDistance(p2);
	if (c_distance > c1.getSumR(c2))
	{
		cout << "����Բ����" << endl;
	}
	else if (c_distance < c1.getSumR(c2))
	{
		cout << "����Բ�ཻ" << endl;
	}
	else if (c_distance == c1.getSumR(c2))
	{
		cout << "����Բ����" << endl;
	}
}
//���̣��ҿ���һ����Ҳ��֪��	double getDistance(Point &another)��ô���ô��ݲ���
//��һֱ����	p1.getDistance(Point &p2);ʼ�ձ�������ǳ����ϵĳ��򣬷��֣�Point &another)ֱ��
//	p1.getDistance(p2);�Ϳ��Ե��ã��������ִ�ָ������ĺ������Ҹ�����֪����ε��á��һ�����Ҫ�Լ�������㣬����
//ѭ�򽥽��㡣���Ƕ�����������֮���������Լ��Ľ���ѭ�򽥽�����ȴ����׿��á�
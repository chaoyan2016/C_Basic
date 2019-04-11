#include<iostream>
using namespace std;
//����
class Shape//���ڷ��أ�������ľ������ֵ�������ú���������
{
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeigth(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};//ûд�֮꣬��������
//������
class Rectangle :public Shape
{
public:
	int getArea()
	{
		return (width *height);
	}
	int getLong()
	{
		return 2 * (width + height);
	}
};
class Triangle :public Shape  //������������
{
public:
	int getArea()
	{
		return (width*height) / 2;
	}
	int getLong() //������������ε��ܳ�
	{
		float slideDistance = 0;
		slideDistance = sqrt((width / 2)* (width / 2) + height * height); //б�߳�����ļ򵥵��㷨
		return (2 * slideDistance + width);//�ܳ��ļ���ļ򵥵��㷨
	}
};
int main(void)
{
	Rectangle Rect;
	Triangle Tria;

	Rect.setWidth(5);//ֱ�����ö�Ӧ����ֵ��С
	Rect.setHeigth(7);//ֱ�����ö�Ӧ����ֵ��С

	Tria.setHeigth(3);//ֱ�����ö�Ӧ����ֵ��С
	Tria.setWidth(8);//ֱ�����ö�Ӧ����ֵ��С

	//������ε����
	cout << "Total area:" << Rect.getArea() << endl;//���ü��㺯������������
	cout << "Total Long:" << Rect.getLong() << endl;//���ü��㺯������������

	//��������ε����
	cout << "Total area:" << Tria.getArea() << endl;//���ü��㺯������������
	cout << "Total Long:" << Tria.getLong() << endl;//���ü��㺯������������
	return 0;
}
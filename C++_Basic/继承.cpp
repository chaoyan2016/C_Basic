#include<iostream>
using namespace std;
//����
class Shape
{
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};
//������
class Rectangle :public Shape  //����ΪShape��������
{
public:                        //�̳��˶�Ӧ�ķ���
	int getArea()
	{
		return(width*height);
	}
};

//������
class Sum :public Shape  //����ΪShape��������
{
public:                        //�̳��˶�Ӧ�ķ���
	int getSum()
	{
		return(width+height);
	}
};

int main1(void)
{
	Rectangle Rect;          
	Rect.setWidth(5);  //Rect����ʹ�ø���ķ���
	Rect.setHeight(7);

	Sum S;
	S.setWidth(4);  //Rect����ʹ�ø���ķ���
	S.setHeight(3);
	//�����������
	cout << "Total area:" << Rect.getArea() << endl;

	//�������ĺ�
	cout << "Total sum:" << S.getSum() << endl;
	return 0;
}

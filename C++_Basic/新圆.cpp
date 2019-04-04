#include <iostream>
#include <string>
using namespace std;

struct Point //����Ϣ
{
	float x;
	float y;
};

struct Circle  //Բ����Ϣ
{
	Point center;
	float radii;

	float Area() { return 3.14f * radii * radii; }
	float Perimeter() { return 2.0f * 3.14f * radii; } //ֱ��
};

struct Ring  //������Ϣ
{
	Circle external;
	Circle internal;

	float Area() { return external.Area() - internal.Area(); }  //�������
	float Perimeter() { return external.Perimeter() + internal.Perimeter(); } //ֱ��
};

int main()





{
	Point p1 = { 0.0, 0.0 };
	Circle c1 = { p1, 2.4 };
	Circle c2 = { p1, 1.5 };
	Ring rg1 = { c1, c2 };

	cout << "x-coordinate = " << p1.x << "\n"
		<< "y-coordinate = " << p1.y << "\n"//�������
		<< endl;

	cout << "big circle's center = "
		<< "(" << c1.center.x << "," << c1.center.y << ")"//��Բ��Բ�ġ��뾶��������ܳ�
		<< "\n"
		<< "radii = "
		<< c1.radii
		<< "\n"
		<< "Perimeter = "
		<< c1.Perimeter()
		<< "\n"
		<< "Area = "
		<< c1.Area() << "\n\n"
		<< endl;

	cout << "small circle's center = "
		<< "(" << c2.center.x << "," << c2.center.y << ")" //СԲ��Բ�ġ�ֱ����������ܳ�
		<< "\n"
		<< "radii = "
		<< c2.radii
		<< "\n"
		<< "Perimeter = "
		<< c2.Perimeter()
		<< "\n"
		<< "Area = "
		<< c2.Area() << "\n\n"
		<< endl;

	cout << "Ring's center = "
		<< "(" << rg1.internal.center.x << "," << rg1.internal.center.y << ")"//�������ġ��뾶���ܳ������
		<< "\n"
		<< "big radii = "
		<< rg1.external.radii
		<< "\n"
		<< "small radii = "
		<< rg1.internal.radii
		<< "\n"
		<< "Perimeter = "
		<< rg1.Perimeter()
		<< "\n"
		<< "Area = "
		<< rg1.Area() << "\n\n"
		<< endl;

	return 0;
}
#include<iostream>
using namespace std;//c++�������ռ�
class circle
{
public:

	double r;

	double pi = 3.1415926;
	double area = pi*r*r;

};
int main()
{
	circle pi;
	cout << "������area" << endl;
	cin >> pi.r;

	cout << pi.area << endl;	//����

	system("pause");
	return 0;


}
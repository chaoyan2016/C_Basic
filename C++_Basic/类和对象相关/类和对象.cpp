#include<iostream>
using namespace std;
class Box
{
public:
	double length;  //����
	double breadth;//�߶�
	double height;//�߶�

};
int main()
{
	Box Box1;//����Box1������ΪBox
	Box Box2;//����Box2������ΪBox
	double volume = 0.0;//���ڴ洢���

	//Box1����
	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breadth = 7.0;

	//Box2����
	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.breadth = 13.0;

	//Box1�����
	volume = Box1.height*Box1.length*Box1.breadth;
	cout << "Box1�������" << volume << endl;

	//Box2�����
	volume = Box2.height*Box2.length*Box2.breadth;
	cout << "Box2�������" << volume << endl;

	return 0;

}
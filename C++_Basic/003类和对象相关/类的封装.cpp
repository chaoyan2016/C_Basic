#include<iostream>
using namespace std;
//Բ������
//���ǰ����Ժͷ�����װ
//����ڲ�
//����ⲿ
//���ǳ�����һ���࣬����ȡ�������
//����һ���������ͣ����ǳ����
//������һ������ı�����ռ�þ����ڴ�ռ�
class Circle
{
public: 
	double r;
	double s;
public:
	double getR()
	{
		return r;
	}
	 void setR(double val)
	 {
		 r = val; 
	 }
public :
	double getS() //�����ӹ��ܵ�ʱ�������޸��࣬�޸����еĺ������Ի��߷���
	{
		s = 3.14f*r*r;
		return s; 
	}
private:
	int a;

};
 
  
void main1()
{
	cout << "������Բ�İ뾶";
	double r;
	cin >> r;
	double s = 3.14f*r*r;
	cout << "Բ�����" << s << endl;

}  
//������̱�̼ӹ����ǣ�����
//��������̼ӹ����ǣ��࣬ 
void main11()
{
	//ͨ���ඨ�����������
	Circle c1, c2;
	//c1.a = 10;
	//����������Ը�ֵ
	c1.setR(10);
	cout << "Բ������ǣ�" << c1.getS() << endl;

	//����������Ը�ֵ
	c2.setR(12);
	cout << "Բ������ǣ�" << c2.getS() << endl;
	//��ש��C++���������ָ����c1��c2������getS()�����ǣ�
	//��ש��C��ѧϰ���ڴ��������������C++���ܹ���������ð���


}
#include<iostream>
using namespace std;
int flag = 0;//�жϱ�־λ
//Ŀ�꣺���������,������������������
class Cube
{
public:
	int getA()
	{
		return m_a; 
	}
	int getB()
	{
		return m_b;
	}
	int getC()
	{
		return m_b;
	}
	void setABC(int a = 0, int b = 0, int c = 0)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}
	//
	void setA(int a)
	{
		m_a = a;
	}
	void setB(int b)
	{
		m_b = b;
	}
	void setC(int c)
	{
		m_c = c;
	}
public:
	int getV()
	{
		m_v = m_a * m_b*m_c;
		return m_v;
	}
	int getS()
	{
		m_s = 2*(m_a * m_b+ m_b *m_c+ m_a * m_c);
		return m_s;
	}
protected:
private:
	int m_a;
	int m_b;
	int m_c;
	int m_v;
	int m_s;
};
struct Teacher
{
	char name[32];
	int age;
};
//c++�������ģ��
//1��ȣ�0�����
int judgeCube(Cube &c1, Cube &c2)
{
	int s1 = 0, s2 = 0;
	
	s1 = c1.getS();
	s2 = c2.getS();
	if (s1==s2)
	{
		return flag=1;
	}
	else
	{
		return flag = 0;
	}
	
}
int judgeCube(Cube *pc1, Cube *pc2)
{
	return 1;
}
void main101()
{
	Teacher t1;
	Cube c1;
	c1.setA(1);
	c1.setB(2);
	c1.setC(3);

	cout << "s�ǣ�"<<c1.getS();
	Cube c2;
	c2.setABC(1, 2, 3);//Ĭ�ϲ���
	cout << "s�ǣ�" << c2.getS();

}

void main()
{
	Cube c1,c2;
	c1.setABC(1, 2, 3);
	c2.setABC(1, 2, 3);

	//judgeCube(&c1, &c2);
	judgeCube(c1,c2);
	if (flag==1)
	{
		cout << "����Բ�����ͬ" << endl;
	}
	if (flag == 0)
	{
		cout << "����Բ�������ͬ" << endl;
	}
}

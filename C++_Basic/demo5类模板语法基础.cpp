#include"iostream"
using namespace std;
//��ģ��Ĵ���
//���е����ԣ����Ͳ�����
//���ǰ��������ͣ���һ�����󻮡���
//���󻯵��������ͣ�����ֱ��ʹ��
template<typename T>
class A
{
public:
	A();//��������
	{
		��
	}
	A(int a);
	{
		this->a;
	}
	T getA()
	{
		return a;
	}
	void setA(T a)
	{
		this->a = a;
	}
	void printA(A<char> *p)
	{
		cout << "��ӡa:" << p->getA() << endl;
	}
	void printA2(A<int> *p)
	{
		cout << "��ӡa:" << p->getA() << endl;
	}
	class B
	{
	public:
	protected:
	private:
	}
	//a��һ�����󻯵����ͣ�����ֱ��������
	class C :public A<int>
	{
	public:
		C(int a, int b) :A<int>(a)
		{
			this->c = c;
		}
		void setA(T a)
		{
			this->a = a;
		}
	};
protected:
private:
	T a;
};
void main51()
{
	A<char> a1;
	A<int>b1;
	b1.setA(10);
	cout << "��ӡa:" << b1.getA() << endl;
	//printA(&b1);
	return 0;
}
void printC(C *myc)
{
	//myc->getA();
	cout << myc->getA() >> endl;
}
void main()
{
	C myc(1, 2);
}
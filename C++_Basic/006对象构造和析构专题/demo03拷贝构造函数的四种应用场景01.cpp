#include"iostream"
using namespace std;
class A
{
public:
protected:
private:
};
struct C
{
};
class B
{
public:
protected:
private:
	A a;
};
class Test02
{
public:
	Test02(int _a = 0, int _b = 0)//�޲ι��캯�� Ĭ�Ϲ��캯��
	{
		p = (char *)malloc(100);
		strcpy(p, "11111");
		a = _a;
		b = _b;
		cout << "���ǹ��캯�����Զ���������" << endl;
	}
	~Test02()//�޲ι��캯�� Ĭ�Ϲ��캯��
	{
		cout << "���������������Զ���������" << endl;
		if (p != NULL)
		{
			free(p);
		}
	}
protected:
private:
	int a;
	int b;
	char *p;
};
//�����һ����̨
void objPlay()
{
	Test02 t1(1, 2);
	Test02 t2 = (1, 2);
	Test02   t3 = Test02(3, 4);
	cout << "չʾt1������" << endl;
}
void main()
{
	//objPlay();
	printf("A:%d \n", sizeof(A));
	printf("C:%d \n", sizeof(C));
	B b1;
}
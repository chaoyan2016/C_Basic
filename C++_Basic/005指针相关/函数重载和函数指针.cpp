#include<iostream>
using namespace std;
int func(int x)//int (int a)
{
	return x;
}
int func(int a,int b)  //int (int a)����ط�Ӧ���Ƿ�������
{
	return a+b;
}
int func(const char* s)  //int (int a)����ط�Ӧ���Ƿ�������
{
	return strlen(s);
}
//����һ����������0
typedef int MYTYPEAarry[10];//����һ���ṹ������
MYTYPEAarry a1;//int a[10]

//����һ����������ָ������
typedef int(*MYArrayP)[10];

MYArrayP myarray = NULL;
//myarray=&a1;

int(*myP[10]);//���߱��������ҷ���4���ֽڵ��ڴ档������
//��Ҫ��һ��ָ����� �������ָ��һ�����顣��

//����һ�����ͣ��������͡���
//��������� int aaa(int a)
typedef int(*PFUNC)(int a);//int(int a)
typedef int(*PFUNC2)(const char *p);//int(int a)

int main(int argc, char *argv[])
{
	int c = 0;
	//func��һ��������������������������ڵ�ַ�����������Ǻ���ָ�����
	{
		PFUNC p = func;
		c = p(1);
	}
	//c=p("ddddd");
	printf("c=%d\n", c);
	{
		PFUNC2 myp2 = func;
		myp2("aaaa");
	}
	printf("press enter to continue...");
	getchar();
	return 0;
}



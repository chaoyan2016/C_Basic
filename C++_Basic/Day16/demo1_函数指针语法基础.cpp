#include"string.h"
#include"stdio.h"
#include"stdlib.h"
void main1()
{
	//������Ҫ�أ����ơ�����������ֵ\
	//��ζ���һ������ָ������
	//��ζ���һ��ָ���������͵�һ��ָ�����
	// int aray[10]
	typedef int(MyAray)[10];
	MyAray myArray;
	myArray[0] = 1;
	{
		typedef int(*PMyArrayType)[10];
		PMyArrayType pmyArray;
		pmyArray = &pmyArray;

		(*pmyArray)[0] = 111;
		{
			int a = 10;
			int *p = NULL;
			p = &a;
		}
	}
	{
		int array3[10];
		int(*pM)[10];//������һ��ָ�����������c���������ҷ������ĸ��ֽڵ��ڴ棬���ָ�����ָ��һ������
		//����֮���ǣ�pM++�����һ�����鵥λ����������4*10�����ֽ�

		pM = &array3;
		(*pM)[0] = 12;
		printf("%d \n", array3[0]);
	}
}
//���庯������
//��ζ���һ��ָ������
	//��ζ���һ��ָ���������͵�һ��ָ�����
//test���������������׵�ַ������ָ��
int test(int a)
{
	printf("a:%d", a);
	return 0;
}
void main()
{
	//����һ���������͡�����
	typedef int (myFunc)(int);
	MYFuncType *myfun;
	myfun = test;
	myfun(2);
}
{
	//�Ժ�������&��ַ���Ͳ�ȡ��ַ��Ч��һ����������
	//��ʷ����
	myfun = &test;
	myfun(3);
}
{
	//�����˺���ָ������
	typedef int(*PMYFuncType)(int);
	PMYFuncType pMyFuncType;

	ret pMyFuncType(1);
}
{
	int(*PmyFunc) (int);
	PmyFunc = test;
	PmyFunc(1);
}
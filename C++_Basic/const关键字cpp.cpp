#include<iostream>
using namespace std;
struct Teacher
{
	char name[32];
	int age;
};
void printTe(const Teacher *p)
{
	//const����ָ���ڴ�ռ䲻�ܱ��޸�
	//p->age = 10;
}
void printTe2(Teacher * const p)
{
	//const����ָ��p�������ܱ��޸�
	//p=null; //err
}
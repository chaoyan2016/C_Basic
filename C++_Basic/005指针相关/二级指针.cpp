#include"iostream"
using namespace std;
struct  Teacher
{
	char name[64];
	int age;
};
int getTe(struct Teacher **myp)//�ṹ����Ϊ����ָ��myp
{
	Teacher *p = (Teacher *)malloc(sizeof(Teacher));//pΪָ�����
	if (p=NULL)
	{
		return -1;
	}
	memset(p, 0, sizeof(Teacher));//ȫ������Ϊ0
	p->age = 33;//age
	*myp = p; 
	return 0;

}
//ָ������ö���
int getTe2(Teacher* &myp) //�൱��һ������ָ��
{
	myp = (Teacher *)malloc(sizeof(Teacher));
	myp->age = 34;

	return 0;
}

void main1()
{
	Teacher *p = NULL;
	//getTe(&p);
	getTe2(p);
	printf("age:%d \n", p->age);
}
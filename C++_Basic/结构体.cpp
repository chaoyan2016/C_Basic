#include<iostream>
#include<cstring>
using namespace std;
//����һ���ṹ������Books
struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
int main()
{
	Books Book1;
	Books Book2;
	
	//Book1����
	strcpy(Book1.title, "C++ �̳�");
	strcpy(Book1.author, "Runob");
	strcpy(Book1.subject, "�������");
	Book1.book_id = 12345;
	  
	//Book2����
	strcpy(Book2.title, "CSS �̳�");
	strcpy(Book2.author, "Runob");
	strcpy(Book2.subject, "ǰ�˼���");
	Book1.book_id = 12346;

	//���Book1��Ϣ
	cout << "��һ�������⣺" << Book1.title << endl;
	cout << "��һ�������ߣ�" << Book1.author << endl;
	cout << "��һ������Ŀ��" << Book1.subject << endl;
	cout << "��һ����ID��" << Book1.book_id << endl;

	//���Book2��Ϣ
	cout << "��һ�������⣺" << Book2.title << endl;
	cout << "��һ�������ߣ�" << Book2.author << endl;
	cout << "��һ������Ŀ��" << Book2.subject << endl;
	cout << "��һ����ID��" << Book2.book_id << endl;

	return 0;
}
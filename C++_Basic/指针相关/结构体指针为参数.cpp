#include<iostream>
#include<cstring>
using namespace std;
void printBook(struct Books *book);//��Ҫ����������֮���庯��

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

	////Book1����
	strcpy(Book1.title, "C++ �̳�");
	strcpy(Book1.author, "Runob");
	strcpy(Book1.subject, "�������");
	Book1.book_id = 12345;

	//Book2����
	strcpy(Book2.title, "CSS �̳�");
	strcpy(Book2.author, "Runob");
	strcpy(Book2.subject, "ǰ�˼���");
	Book2.book_id = 12346;

	//ͨ����Book1�ĵ�ַ�����Book1��Ϣ
	printBook(&Book1);

	//ͨ����Book2�ĵ�ַ�����Boo2��Ϣ
	printBook(&Book2);

	return 0;
}
void printBook(struct Books *book)
{
	cout << "����⣺" << book->title << endl;
	cout << "�����ߣ�" << book->author << endl;
	cout << "����Ŀ��" << book->subject << endl;
	cout << "��ID��" << book->book_id << endl;
}
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
	string str("some string");
	// range for ���
	for (auto &c : str)
	{
		c = toupper(c);
	}
	cout << str << endl;
	return 0;
}

// ����ĳ���ʹ��Range for������һ���ַ��������������ַ�ȫ����Ϊ��д��Ȼ��������Ϊ��

// SOME STRING
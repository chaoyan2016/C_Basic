#include"iostream"
using namespace std;
void search(int a[], int len) //O(n)
{
	int sp[1000] = { 0 };
	int i = 0;
	int max = 0;

	for (i = 0; i < len; i++) //n
	{
		//�����ֳ��ֵĴ�������������sp�С���ŵķ��� ���±�ķ���������-1
		int index = a[i] - 1;

		sp[index]++;//�ۼ����ֳ��ֵĴ���
	}

	for (i = 0; i < 1000; i++) //1000
	{
		if (max < sp[i])
		{
			max = sp[i];
		}
	}

	for (i = 0; i < 1000; i++) //1000
	{
		if (max == sp[i])
		{
			printf("%d\n", i + 1);
		}
	}
}

int main()
{
	int array[] = { 1, 1, 3, 4, 5, 6, 6, 6, 2, 3 };

	//search(array, sizeof(array)/sizeof(*array));
	search(array, sizeof(array) / sizeof(array[0]));
	system("pause");
	return 0;
}
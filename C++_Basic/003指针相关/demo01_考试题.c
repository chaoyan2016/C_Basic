#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int GetString_Adv(const char *str1, char **str2);
int GetString_Adv_Free1(char *str2);

int GetString(const char *str1, char *str2)
{
	int ret = 0;
	char *p1 = NULL, *p2 = NULL;//����ָ�����
	int len = 0, i = 0;
	if (str1 == NULL || str2 == NULL)//��ָ��
	{
		return -1;//����ǿ�ָ���ʱ��᷵��-1��ret
		return ret;
	}
	len = strlen(str1);//��ȡ�ַ����ĳ���
	//�����ʼ������
	strcpy(str2, str1); //�����ַ���
	p1 = str2 + 1;//��ַ��һ��*p1Ϊ*p2�����һ��Ԫ�صĵ�ַ��һ���ַ���Ӧһ����ַ��
	p2 = str2;//��ַ
	for (i = 0; i < len; i++)//lenΪstr1�ĳ���
	{
		if (isalpha(*p1) && isspace(*p2))//����p1��ַ��Ϊa��p2�ĵ�ַΪ�ո�������ж�����
		{
			*p1 = *p1 - 32;//��Ӧÿһ��Ԫ�ص�λ�ã����ʵ�һ����ĸת����д
		}
		//����ѭ������
		p2 = p1;//��ַ��ֵ
		p1++;//�ټ�һ�ε�ַ
	}
	return ret;
}
void main()
{
	int ret = 0;
	const char *str1 = "i am student ,you are teacher";//Ӧ�û�ȡ�����׵�ַ����Ϊ����һ����ַ�治�£����Ի�ȡ�����׵�ַ
	char buf[1024] = { 0 };

	ret = GetString(str1, buf);//����ȡ��str1�ַ�����ֵ���δ���buf�С��п��ܷ���-1
	if (ret != 0)
	{
		printf("func GEtString() err:%d\n", ret);//ʧ��
		return ret;
	}
	printf("buf:%s\n", buf);//��ӡbuf
}
//ͨ��������ӣ�����ϸ�˽����ڴ���һ�ζ�ȡÿ���ַ��Ĺ��̣����Ҵ���buf��ͨ��ѭ�����жϿո��ֵ��
//������ϸ�˵��Բ鿴�ڴ�Ĺ��̡�֪���˵ײ������ڴ�ִ�еĹ��̡�
//ָ��ĵ�ַΪ�׵�ַ��һ���ַ�һ����ַ��
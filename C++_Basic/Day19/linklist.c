#include<stdio.h>
#include "stdlib.h"
#include "string.h"

#include "linklist.h"

typedef struct _tag_LinkList
{
	//���������棬��Ҫ�������нڵ���Ϣ����Ҫ��һ����ʼ��
	//���Ǵ�ͷ�ڵ����������
	LinkListNode header;
	int length;
}TLinkList;

LinkList* LinkList_Create()
{
	TLinkList *ret = (TLinkList *)malloc(sizeof(TLinkList));
	if (ret == NULL)
	{
		return NULL;
	}
	//memset(ret, 0, sizeof(TLinkList));
	ret->header.next = NULL;
	ret->length = 0;
	return ret;
}

void LinkList_Destroy(LinkList* list)
{
	if (list == NULL)
	{
		return;
	}
	free(list);
	return;
}

void LinkList_Clear(LinkList* list)
{
	TLinkList *tList = NULL;

	if (list == NULL)
	{
		return;
	}
	tList = (TLinkList *)list;
	tList->length = 0;
	tList->header.next = NULL;
	return;
}

int LinkList_Length(LinkList* list)
{
	TLinkList *tList = (TLinkList *)list;
	if (tList == NULL)
	{
		return 0;
	}

	return tList->length;
}

int LinkList_Insert(LinkList* list, LinkListNode* node, int pos)
{
	return 0;
}

LinkListNode* LinkList_Get(LinkList* list, int pos)
{
	return NULL;
}

LinkListNode* LinkList_Delete(LinkList* list, int pos)
{
	return NULL;
}
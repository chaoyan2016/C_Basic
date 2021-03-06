
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "linkstack.h"
#include "linklist.h"

typedef struct _tag_LinkStackNode
{
	LinkListNode node; //占位结构。。。只要定义一个和node节大小一样的数据即可
	void *item;
}TLinkStackNode;

//我要创建一个linkstack，准备用linklist去模拟实现
//相当于在 linkstack.c中写 linklist库的测试程序。。。。。。
LinkStack* LinkStack_Create()
{
	//创建一个栈，通过线性表去模拟。。。（创建一个栈，相当于创建一个线性表）
	return LinkList_Create();
}

void LinkStack_Destroy(LinkStack* stack)
{
	LinkStack_Clear(stack); //注意 destory的时候，需要把栈中的所有元素都清空
	LinkList_Destroy(stack);
}

void LinkStack_Clear(LinkStack* stack)
{
	//LinkList_Clear(stack);
	while (LinkStack_Size(stack) > 0)
	{
		LinkStack_Pop(stack); //在这个函数里面有内存释放函数
	}
	return ;
}

//向栈中放元素，相当于 向线性表中插入一个元素
int LinkStack_Push(LinkStack* stack, void* item)
{
	int ret = 0;
	//需要item数据，转换成 linklist的业务节点
	TLinkStackNode *pTe = (TLinkStackNode *)malloc(sizeof(TLinkStackNode));
	if (pTe == NULL)
	{
		return -1;
	}
	pTe->item = item;

	//头插法 ，向线性表中插入元素，只不过是插入元素的时候，需要构造业务节点而已。。。。。。
	//ret = LinkList_Insert(stack, (LinkListNode *)(&pTe->node),0 );
	ret = LinkList_Insert(stack, (LinkListNode *)(&pTe->node), 0);
	printf("结点的地址      :%p\n", &pTe->node);
	printf("整个结构体的地址:%p\n",&pTe);
	if (ret != 0)
	{
		free(pTe);
	}
	return ret;
}

void* LinkStack_Pop(LinkStack* stack)
{
	void *myItem = NULL;
	TLinkStackNode *pTmp = NULL;
	pTmp = (TLinkStackNode *)LinkList_Delete(stack, 0);
	if (pTmp == NULL)
	{
		return NULL;
	}
	myItem = pTmp->item;

	//注意向线性表中，插入元素的时，打造节点，分配内存；
	//弹出元素时，需要释放节点内存，不要忘记

	if (pTmp != NULL)  
	{
		free(pTmp);
	}
	return myItem;
}

void* LinkStack_Top(LinkStack* stack)
{
	void *myItem = NULL;
	TLinkStackNode *pTmp = NULL;
	pTmp = (TLinkStackNode *)LinkList_Get(stack, 0);
	if (pTmp == NULL)
	{
		return NULL;
	}
	myItem = pTmp->item;
	return myItem;
}

int LinkStack_Size(LinkStack* stack)
{
	return LinkList_Length(stack);
}
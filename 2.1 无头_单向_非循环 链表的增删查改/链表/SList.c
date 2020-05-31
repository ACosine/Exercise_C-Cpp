#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>
#include <assert.h>
#include <malloc.h>
#include "SList.h"


// 动态申请一个节点
SListNode* BuySListNode(SLTDateType data)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		assert(0);
		return NULL;
	}	

	newNode->next = NULL;  //申请的新节点的下一个节点的地址为空
	newNode->data = data;  //申请的新节点的数据为data
	
	return newNode;
}

// 单链表打印
void SListPrint(SListNode* head)
{
	SListNode* cur = head;
	while(cur)
	{
		printf("%d-> ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

// 单链表尾插
void SListPushBack(SListNode** head, SLTDateType data)
{
	assert(head);
	SListNode* newNode = BuySListNode(data);
	//空链表
	if (*head == NULL)
	{
		*head = newNode;
	}
	//不是空链表
	else
	{
		//1.找到链表中的最后一个节点
		SListNode* cur = *head;
		while (cur->next)
		{
			cur = cur->next;
		}
		//2.插入新节点
		cur->next = newNode;
	}
}


// 单链表的尾删
void SListPopBack(SListNode** head)
{
	assert(head);//检测非法操作
	//空链表
	if (*head == NULL)
	{
		return;
	}
	//链表只有一个节点
	else if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	//链表有多个节点
	else
	{
		//1.找到链表中的最后一个节点
		SListNode* cur = *head;
		SListNode* prev = NULL;//标记cur前一个节点
		while (cur->next)
		{
			prev = cur;
			cur = cur->next;
		}
		//2.将前一个节点的next指向NULL，并释放该节点
		prev->next = NULL;
		free(cur);
	}


}


// 单链表的头插
void SListPushFront(SListNode** head, SLTDateType data)
{
	assert(head);
	SListNode* newNode = BuySListNode(data);
	newNode->next = *head; //先将新节点的next指向*head
	*head = newNode;  //后将*head指向新节点
}


// 单链表头删
void SListPopFront(SListNode** head)
{
	SListNode* delNode = NULL;
	assert(head);
	if (*head == NULL) 	return;

	delNode = *head;        //先标记
	*head = delNode->next;  //再移动head
	free(delNode);          //后释放节点
}

//单链表节点个数
int SListSize(SListNode* head)
{
	SListNode* cur = head;
	int count = 0;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;
}


//单链表是否为空
int SListEmpty(SListNode* head)
{
	return NULL == head; // 返回0 - 不是空链表，返回非0 - 空链表
}

// 单链表查找
SListNode* SListFind(SListNode* head, SLTDateType data)
{
	SListNode* cur = head;
	while (cur)
	{
		if (cur->data == data)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
//单链表销毁
void SListDestroy(SListNode** head)
{
	assert(head);
	while (*head)
	{
		SListNode* delNode = *head;
		*head = delNode->next;
		free(delNode);
	}
}

// 单链表在任意位置pos之后插入x.   
void SListInsertAfter(SListNode* pos, SLTDateType data)
{
	SListNode* newNode = BuySListNode(data);
	if (NULL == pos)
		return;
	newNode->next = pos->next;
	pos->next = newNode;
}

// 单链表删除任意位置pos之后的值.  
void SListEraseAfter(SListNode* pos)
{
	SListNode* delNode = NULL;//声明
	if (NULL == pos|| NULL == pos->next)
		return;
	delNode = pos->next;//先标记
	pos->next = delNode->next;//再移动pos
	free(delNode); //后释放

}



/*******************************测试单链表************************************************/
void TestSList()
{
	SListNode* head = NULL;  //给出一个指针，让它指向链表的第一个节点

	//SListPushBack(&head, 1);//尾插
	//SListPushBack(&head, 2);
	//SListPushBack(&head, 3);
	//SListPushBack(&head, 4);
	//SListPushBack(&head, 5);
	//

	//SListPopBack(&head);//尾删
	//SListPopBack(&head);
	//SListPopBack(&head);
	//SListPopBack(&head);
	//SListPopBack(&head);

	SListPushFront(&head, 1);//头插
	SListPushFront(&head, 2);
	SListPushFront(&head, 3);
	SListPushFront(&head, 4);
	SListPushFront(&head, 5);

	//printf("%d\n", SListSize(head));
	//SListPrint(head);

	//SListPopFront(&head);
	//SListPopFront(&head);

	//SListInsertAfter(SListFind(head, 5), 8);
	//SListPrint(head);


	//SListInsertAfter(SListFind(head, 9), 8);
	//SListPrint(head);



	SListEraseAfter(SListFind(head, 5));
	SListPrint(head);

	SListEraseAfter(SListFind(head, 9));
	SListPrint(head);


	//SListDestroy(&head);
	//SListPrint(head);

	//int value = SListEmpty(head);
	//if (value)
	//	printf("空链表\n");

	

	//printf("%d\n", SListSize(head));
	//SListPrint(head);
}
#define _CRT_SECURE_NO_WARNINGS 1  
#include "SList.h"
#include <stdio.h>
#include <assert.h>
#include <malloc.h>

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
	printf("\n");
}

// 单链表尾插
void SListPushBack(SListNode** head, SLTDateType data)
{
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



/*******************************测试单链表************************************************/
void TestSList()
{
	SListNode* head = NULL;
	SListPushBack(&head, 1);
	SListPushBack(&head, 2);
	SListPushBack(&head, 3);
	SListPushBack(&head, 4);
	SListPushBack(&head, 5);

	SListPrint(head);


}
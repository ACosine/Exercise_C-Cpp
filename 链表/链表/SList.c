#define _CRT_SECURE_NO_WARNINGS 1  
#include "SList.h"
#include <stdio.h>
#include <assert.h>
#include <malloc.h>

// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType data)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		assert(0);
		return NULL;
	}	

	newNode->next = NULL;  //������½ڵ����һ���ڵ�ĵ�ַΪ��
	newNode->data = data;  //������½ڵ������Ϊdata
	
	return newNode;
}

// �������ӡ
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

// ������β��
void SListPushBack(SListNode** head, SLTDateType data)
{
	SListNode* newNode = BuySListNode(data);
	//������
	if (*head == NULL)
	{
		*head = newNode;
	}
	//���ǿ�����
	else
	{
		//1.�ҵ������е����һ���ڵ�
		SListNode* cur = *head;
		while (cur->next)
		{
			cur = cur->next;
		}
		//2.�����½ڵ�
		cur->next = newNode;
	}
}



/*******************************���Ե�����************************************************/
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
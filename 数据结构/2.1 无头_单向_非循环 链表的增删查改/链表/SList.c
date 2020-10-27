#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>
#include <assert.h>
#include <malloc.h>
#include "SList.h"


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
	printf("NULL\n");
}

// ������β��
void SListPushBack(SListNode** head, SLTDateType data)
{
	assert(head);
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


// �������βɾ
void SListPopBack(SListNode** head)
{
	assert(head);//���Ƿ�����
	//������
	if (*head == NULL)
	{
		return;
	}
	//����ֻ��һ���ڵ�
	else if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	//�����ж���ڵ�
	else
	{
		//1.�ҵ������е����һ���ڵ�
		SListNode* cur = *head;
		SListNode* prev = NULL;//���curǰһ���ڵ�
		while (cur->next)
		{
			prev = cur;
			cur = cur->next;
		}
		//2.��ǰһ���ڵ��nextָ��NULL�����ͷŸýڵ�
		prev->next = NULL;
		free(cur);
	}


}


// �������ͷ��
void SListPushFront(SListNode** head, SLTDateType data)
{
	assert(head);
	SListNode* newNode = BuySListNode(data);
	newNode->next = *head; //�Ƚ��½ڵ��nextָ��*head
	*head = newNode;  //��*headָ���½ڵ�
}


// ������ͷɾ
void SListPopFront(SListNode** head)
{
	SListNode* delNode = NULL;
	assert(head);
	if (*head == NULL) 	return;

	delNode = *head;        //�ȱ��
	*head = delNode->next;  //���ƶ�head
	free(delNode);          //���ͷŽڵ�
}

//������ڵ����
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


//�������Ƿ�Ϊ��
int SListEmpty(SListNode* head)
{
	return NULL == head; // ����0 - ���ǿ��������ط�0 - ������
}

// ���������
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
//����������
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

// ������������λ��pos֮�����x.   
void SListInsertAfter(SListNode* pos, SLTDateType data)
{
	SListNode* newNode = BuySListNode(data);
	if (NULL == pos)
		return;
	newNode->next = pos->next;
	pos->next = newNode;
}

// ������ɾ������λ��pos֮���ֵ.  
void SListEraseAfter(SListNode* pos)
{
	SListNode* delNode = NULL;//����
	if (NULL == pos|| NULL == pos->next)
		return;
	delNode = pos->next;//�ȱ��
	pos->next = delNode->next;//���ƶ�pos
	free(delNode); //���ͷ�

}



/*******************************���Ե�����************************************************/
void TestSList()
{
	SListNode* head = NULL;  //����һ��ָ�룬����ָ������ĵ�һ���ڵ�

	//SListPushBack(&head, 1);//β��
	//SListPushBack(&head, 2);
	//SListPushBack(&head, 3);
	//SListPushBack(&head, 4);
	//SListPushBack(&head, 5);
	//

	//SListPopBack(&head);//βɾ
	//SListPopBack(&head);
	//SListPopBack(&head);
	//SListPopBack(&head);
	//SListPopBack(&head);

	SListPushFront(&head, 1);//ͷ��
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
	//	printf("������\n");

	

	//printf("%d\n", SListSize(head));
	//SListPrint(head);
}
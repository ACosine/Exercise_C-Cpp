typedef int SLTDateType;//���ݵ�����

// 1����ͷ+����+��ѭ��������ɾ���ʵ��
typedef struct SListNode
{
	SLTDateType data;//�洢�ýڵ��е�����
	struct SListNode* next;//nextָ����һ���ڵ�ĵ�ַ
}SListNode;

/****************************��������************************************/
// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType data);
// �������ӡ
void SListPrint(SListNode* head);


// ������β��
void SListPushBack(SListNode** head, SLTDateType data);
// �������βɾ
void SListPopBack(SListNode** head);



// �������ͷ��
void SListPushFront(SListNode** head, SLTDateType data);
// ������ͷɾ
void SListPopFront(SListNode** head);



//������ڵ����
int SListSize(SListNode* head);
//�������Ƿ�Ϊ��
int SListEmpty(SListNode* head);



// ���������
SListNode* SListFind(SListNode* head, SLTDateType data);
//����������
void SListDestroy(SListNode** head);



// ������������λ��pos֮�����x.    ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, SLTDateType data);
// ������ɾ������λ��pos֮���ֵ.    ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos);


//���Ե�����
void TestSList();








typedef int SLTDateType;//数据的类型

// 1、无头+单向+非循环链表增删查改实现
typedef struct SListNode
{
	SLTDateType data;//存储该节点中的数据
	struct SListNode* next;//next指向下一个节点的地址
}SListNode;

/****************************函数声明************************************/
// 动态申请一个节点
SListNode* BuySListNode(SLTDateType data);
// 单链表打印
void SListPrint(SListNode* head);


// 单链表尾插
void SListPushBack(SListNode** head, SLTDateType data);
// 单链表的尾删
void SListPopBack(SListNode** head);



// 单链表的头插
void SListPushFront(SListNode** head, SLTDateType data);
// 单链表头删
void SListPopFront(SListNode** head);



//单链表节点个数
int SListSize(SListNode* head);
//单链表是否为空
int SListEmpty(SListNode* head);



// 单链表查找
SListNode* SListFind(SListNode* head, SLTDateType data);
//单链表销毁
void SListDestroy(SListNode** head);



// 单链表在任意位置pos之后插入x.    分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SListNode* pos, SLTDateType data);
// 单链表删除任意位置pos之后的值.    分析思考为什么不删除pos位置？
void SListEraseAfter(SListNode* pos);


//测试单链表
void TestSList();








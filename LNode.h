
#define ElemType int

typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LinkNode;

void createLinkList_head(LNode*& ln,ElemType a[],int n);	//头插法
void createLinkList_tail(LNode*& ln,ElemType a[],int n);	//尾插法
void initLinkList(LNode*& ln);		//初始化链表
void destroyLinkList(LNode*& ln);	//销毁链表
bool isEmpty(LNode* ln);			//判断链表是否为空
int getLen(LNode* ln);
bool getElem(LNode* ln, int i, ElemType& e);	//得到第i个结点的数据
bool nodeInsert(LNode*& ln,int i ,ElemType e);
bool nodeDelete(LNode*& ln,int i);
int locateElem(LNode* ln, ElemType e);
void showList(LNode* ln);

void test(LNode* ln);
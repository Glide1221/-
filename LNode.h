
#define ElemType int

typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LinkNode;

void createLinkList_head(LNode*& ln,ElemType a[],int n);	//ͷ�巨
void createLinkList_tail(LNode*& ln,ElemType a[],int n);	//β�巨
void initLinkList(LNode*& ln);		//��ʼ������
void destroyLinkList(LNode*& ln);	//��������
bool isEmpty(LNode* ln);			//�ж������Ƿ�Ϊ��
int getLen(LNode* ln);
bool getElem(LNode* ln, int i, ElemType& e);	//�õ���i����������
bool nodeInsert(LNode*& ln,int i ,ElemType e);
bool nodeDelete(LNode*& ln,int i);
int locateElem(LNode* ln, ElemType e);
void showList(LNode* ln);

void test(LNode* ln);
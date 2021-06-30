#include<iostream>
#include"LNode.h"
using namespace std;

void createLinkList_head(LNode*& ln, ElemType a[], int n) {
	LNode* s;
	ln = (LNode*)malloc(sizeof(LNode));
	 ln->next = nullptr;
	for (int i = 0; i < n ; i++) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = a[i];
		s->next = ln->next;
		ln->next = s;
	}
}
void createLinkList_tail(LNode*& ln, ElemType a[], int n) {
	LNode* s,*r;
	ln = (LNode*)malloc(sizeof(LNode));
	ln->next = nullptr;
	r = ln;
	for (int i = 0; i < n; i++) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = a[i];
		s->next = nullptr;
		r->next = s;
		r = s;
	}
}
void initLinkList(LNode*& ln) {
	ln = (LNode*)malloc(sizeof(LNode));
	ln->next = nullptr;
}
void destroyLinkList(LNode*& ln) {
	LNode* pl = ln;
	LNode* pr = ln->next;
	while (pr != nullptr)
	{
		free(pl);
		pl = pr;
		pr = pr->next;
	}
	free(pl);
}
bool isEmpty(LNode* ln) {
	if (ln->next == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int getLen(LNode* ln) {
	int length = 0;
	while (ln->next != nullptr)
	{
		ln = ln->next;
		length++;
	}
	return length;
}

bool getElem(LNode* ln, int i, ElemType& e) {
	if (i < 1||i > getLen(ln)) return false;
	for (; i > 0; i--) {
		ln = ln->next;
	}
	e = ln->data;
	return true;
}
/*
i= 1，插入链表第一个位置；
i= length+1，插入链表最后一个位置；
*/
bool nodeInsert(LNode*& ln,int i ,ElemType e) {
	if (i < 1 || i > getLen(ln) + 1) return false;
	LNode* node = ln;
	LNode* newnode = new LNode;
	for (; i > 1; i--) {
		node = node->next;
	}
	newnode->next = node->next;
	newnode->data = e;
	node->next = newnode;
	return true;
}
bool nodeDelete(LNode*& ln,int i) {
	if (i < 1 || i > getLen(ln)) return false;
	LNode* node = ln;
	for (; i > 1; i--) {
		node = node->next;
	}
	LNode* deNode = node->next;
	node->next = deNode->next;
	free(deNode);
	return true;
}

int locateElem(LNode* ln, ElemType e) {
	for (int i = 1; i <= getLen(ln); i++) {
		ln = ln->next;
		if (ln->data == e) return i;
	}
	return 0;
}

void showList(LNode* ln) {
	int n = 0;
	cout << "------------------------" << endl;
	cout << "head";
	while (ln->next != nullptr) {
		ln = ln->next;
		cout << " -> "<<ln->data;
		n++;
	}
	cout << "\nlength = " << n << endl;
	cout << "------------------------" << endl;
}

void test(LNode* ln) {
	cout << "LinkNode test" << endl;
	int a[] = { 1,2,3,4,4 };
	int b = 0;
	createLinkList_tail(ln,a,5);
	showList(ln);
	getElem(ln, 2, b);
	cout << b<< endl;
	nodeInsert(ln, 2, 10);
	showList(ln);
	nodeDelete(ln, 4);
	showList(ln);
}
#pragma once



template<class ElemType>
class Sqlist {
public:
	Sqlist();
    ~Sqlist();
    void CreateList(ElemType a[], int n); // ��a�����е�Ԫ�ؽ���˳���
    void DispList(); // ���˳���L�е�����Ԫ��
    int ListLength(); // ��˳���ĳ���
    bool GetElem(int i, ElemType& e); // ��˳�����ĳ���кŵ�Ԫ��ֵ
    int LocateElem(ElemType e); // ��Ԫ�ز������һ�����λ��
    bool ListInsert(int i, ElemType e); // ��λ��i��������Ԫ��e
    bool ListDelete(int i); // ��λ��iɾ������Ԫ��
    void ReverseList(); // ��ת˳���

    void test();

private:
	ElemType* data;
	int length;
};
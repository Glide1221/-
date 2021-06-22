#pragma once



template<class ElemType>
class Sqlist {
public:
	Sqlist();
    ~Sqlist();
    void CreateList(ElemType a[], int n); // 由a数组中的元素建造顺序表
    void DispList(); // 输出顺序表L中的所有元素
    int ListLength(); // 求顺序表的长度
    bool GetElem(int i, ElemType& e); // 求顺序表中某序列号的元素值
    int LocateElem(ElemType e); // 按元素查找其第一个序号位置
    bool ListInsert(int i, ElemType e); // 在位置i插入数据元素e
    bool ListDelete(int i); // 在位置i删除数据元素
    void ReverseList(); // 翻转顺序表

    void test();

private:
	ElemType* data;
	int length;
};
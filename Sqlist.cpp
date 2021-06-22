#pragma once
#include"Sqlist.h"
#include<iostream>
using namespace std;

const int MAX_SIZE = 100;

template<class ElemType>
Sqlist<ElemType>::Sqlist() :length(0), data(new ElemType[MAX_SIZE]) {}

template<class ElemType>
Sqlist<ElemType>::~Sqlist(){
	delete[] data;
}

template<class ElemType>
void Sqlist<ElemType>::CreateList(ElemType a[], int n) {
	this->length = n;
	for (int i = 0; i < n; i++)
	{
		*(data+i) = a[i];
	}
}

template<class ElemType>
void Sqlist<ElemType>::DispList() {
	cout << "-------------------------" << endl;
	cout << "length:"<<length << endl;
	for (int i = 0; i < length; i++)
	{
		cout << "data[" << i << "] = " << *(data + i) << endl;
	}
	cout << "-------------------------"  << endl;
}

// ��˳���ĳ���
template<class ElemType>
int Sqlist<ElemType>::ListLength() {
	return this->length;
}

// ��˳�����ĳ���кŵ�Ԫ��ֵ
template<class ElemType>
bool Sqlist<ElemType>::GetElem(int i, ElemType& e){
	int n = i - 1;
	if (n < 0 || n >= length) return false;
	e = *(data + n);
	return true;
}

// ��Ԫ�ز������һ�����к�Ϊe��λ��
template<class ElemType>
int Sqlist<ElemType>::LocateElem(ElemType e){
	for (int i = 0; i < length; i++)
	{
		if (*(data + i) == e)
			return i+1;
	}
	return 0;
}

// ��λ��i��������Ԫ��e
template<class ElemType>
bool Sqlist<ElemType>::ListInsert(int i, ElemType e) {
	if (i<0 || i>length) return false;
	for (int j = length; j > i; j--) {
		*(data + j + 1) = *(data + j);
	}
	*(data + i) = e;
	length++;
	return true;
}

// ��λ��iɾ������Ԫ��
template<class ElemType>
bool Sqlist<ElemType>::ListDelete(int i) {
	int n = i - 1;
	if (n<0 || n>=length) return false;
	for (int j = n; j < length; j++) {
		*(data + j) = *(data + j + 1);
	}
	length--;
	return true;
}

// ��ת˳���
template<class ElemType>
void Sqlist<ElemType>::ReverseList() {
	ElemType temp;
	for (int i = 0; i < length/2; i++)
	{
		temp = *(data + i);
		*(data + i) = *(data + (length - i-1));
		*(data + (length-i-1)) = temp;
	}
}

template<class ElemType>
void Sqlist<ElemType>::test() {
	int a[] = { 1,3,2,4,4,6 };
	Sqlist<int> sqlist;
	sqlist.CreateList(a, 5);
	sqlist.DispList();

	sqlist.ListInsert(3, 0);
	sqlist.DispList();

	sqlist.ListDelete(2);
	sqlist.DispList();

	sqlist.ReverseList();
	sqlist.DispList();
}
# 用C++实现基础数据结构

​	作者是菜鸡，代码是学习数据结构后自己手码的能直接运行的代码。包含各类基础的数据结构。

​	当前已实现：

## 顺序表

​	以对象思维实现，包含两个文件，头文件Sqlist.h包含了Sqlist类的每个函数声明，Sqlist.cpp包含具体的函数实现。

| Sqlist.h                        |                            |
| ------------------------------- | -------------------------- |
| CreateList(ElemType a[], int n) | 由a数组中的元素建造顺序表  |
| DispList()                      | 输出顺序表L中的所有元素    |
| ListLength()                    | 求顺序表的长度             |
| GetElem(int i, ElemType& e)     | 求顺序表中某序列号的元素值 |
| LocateElem(ElemType e)          | 按元素查找其第一个序号位置 |
| ListInsert(int i, ElemType e)   | 在位置i插入数据元素e       |
| ListDelete(int i)               | 在位置i删除数据元素        |
| ReverseList()                   | 翻转顺序表                 |
| test()                          | 测试上述顺序表函数的效果   |

### 	使用方法

​	将Sqlist.h和Sqlist.cpp以及自己想操作的cpp文件放在统一文件夹中，import后直接运行即可。

​	eg：

```c++
#include<iostream>
#include"Sqlist.h"
using namespace std;


int main() {
	new Sqlist<int>->test();
}
```
## 链表

​	以结构体实现，包含两个文件，头文件LNode.h包含了结构体声明和函数声明，LNode.cpp包含具体的函数实现。

| LNode.h                                            |                            |
| -------------------------------------------------- | -------------------------- |
| 结构体声明                                         | 包括data和next结点         |
| createLinkList_head(LNode*& ln,ElemType a[],int n) | 头插法创建链表             |
| createLinkList_tail(LNode*& ln,ElemType a[],int n) | 尾插法创建链表             |
| initLinkList(LNode*& ln)                           | 初始化链表                 |
| destroyLinkList(LNode*& ln)                        | 销毁链表                   |
| isEmpty(LNode* ln)                                 | 判断链表是否为空           |
| getLen(LNode* ln)                                  | 得到链表长度               |
| getElem(LNode* ln, int i, ElemType& e)             | 得到第i个节点的数据值      |
| nodeInsert(LNode*& ln,int i ,ElemType e)           | 在第i位插入节点            |
| nodeDelete(LNode*& ln,int i)                       | 删除第i位的节点            |
| locateElem(LNode* ln, ElemType e)                  | 查找数据=e第一次出现的位置 |
| showList(LNode* ln)                                | 展示链表内容               |
| test(LNode* ln)                                    | 测试上述函数的效果         |

### 	使用方法

​	将LNode.h和LNode.cpp以及自己想操作的cpp文件放在统一文件夹中，import后直接运行即可。

​	eg：

```c++
#include<iostream>
#include"LNode.h"
using namespace std;

int main() {
	LNode ln;
	test(&ln);
}
```



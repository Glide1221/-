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


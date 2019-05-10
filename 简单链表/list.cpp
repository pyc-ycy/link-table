#include"pch.h"
#include"list.h"
#include<iostream>
using namespace std;

void List::Create(point &pHead)//创建一个链表
{
	pHead = new cNode;
	pHead->num = -1;
	pHead->use = false;
	pHead->pNext = NULL;
	cout << "创建成功!" << endl;
	cout << "请按任意键继续！" << endl;
	getchar();
	return;
}

point List::Array(point pHead, int n[],int k)
{
	
	point p = pHead;
	for (int i = 0; i < k; i++)
	{
		point pop = new cNode;//新建一个节点
		pop->num = n[i];
		pop->pNext = nullptr;
		p->pNext = pop;
		p = pop;
	}
	cout << "初始化成功" << endl;
	cout << "请按任意键继续！" << endl;
	getchar();
	return pHead;
}
point List::Sort(point pHead)
{
	if (pHead == NULL || pHead->pNext == NULL)return pHead;//链表为空，或者链表只有一个数据时，直接返回

	point p = pHead->pNext, pstart = new cNode, pend = pHead;//创建一个头结点和尾节点

	pstart->pNext = pHead; //为了操作方便，添加一个头结点

	while (p != NULL)

	{

		point tmp = pstart->pNext, pre = pstart;//创建一个临时指针存放待移动位置的数据的指针，创建一个指针专门用于移动节点

		while (tmp != p && p->num >= tmp->num) //找到插入位置

		{
			tmp = tmp->pNext; pre = pre->pNext;//将当前节点移到下一节点
		}

		if (tmp == p)pend = p;//当临时指针遍历完链表

		else

		{

			pend->pNext = p->pNext;

			p->pNext = tmp;

			pre->pNext = p;

		}

		p = pend->pNext;

	}

	pHead = pstart->pNext;

	delete pstart;
	cout << "排序成功" << endl;
	cout << "请按任意键继续！" << endl;
	getchar();
	return pHead;
}

void List::Insert(point pHead, int num)
{
	//向链表中插入数据
	point p = pHead;
	while (p->pNext != NULL)
	{
		p = p->pNext;
	}
	point pop = new cNode;
	pop->num = num;
	pop->pNext = NULL;
	pop->use = false;
	p->pNext = pop;
	cout << "插入成功" << endl;
	cout << "请按任意键继续！" << endl;
	getchar();
	return;

}
void List::Print(point pHead)
{
	//输出链表
	cout << "链表中的情况：";
	int flg = 0;
	while (pHead->pNext != NULL)
	{
		flg = 1;
		pHead = pHead->pNext;
		cout << pHead->num << " ";
	}
	if (flg==0)
		cout << "链表为空!" << endl;
	cout << "请按任意键继续！" << endl;
	getchar();
}
void List::Delete(point pHead, int n)//在链表中删除某个数值
{
	point p = pHead;
	int flg = 0;
	while (p->pNext != NULL)
	{
		if (p->pNext->num == n)
		{
			flg = 1;
			if (p->pNext->pNext == NULL)
			{
				p->pNext = NULL;
				cout << "删除成功!" << endl;
				break;
			}
			else
			{
				p->pNext = p->pNext->pNext;
				cout << "删除成功!" << endl;
				break;
			}
		}
		p = p->pNext;
	}
	if (!flg)
		cout << "输入错误，要删除的值不存在！" << endl;
	cout << "请按任意键继续！" << endl;
	getchar();
}

void List::Find(point pHead, int n)//在链表中查找某个数值
{
	point p = pHead;
	int flg = 0;
	int size = 0;
	while (p->pNext != NULL)
	{
		size++;
		if (p->pNext->num == n)
		{
			flg = 1;
			break;
		}
		
		p = p->pNext;
	}
	if (flg != 0)
		cout << n << " 该数值在链表中的位置" << size << " " << p << endl;
	else
		cout << n << " 输入错误，该值在链表中不存在" << endl;
	cout << "请按任意键继续！" << endl;
	getchar();
}

void List::Instead(point pHead, int x, int y)//在链表中替换某个数值，用y替换x
{
	point p = pHead;
	int flg = 0;
	while (p->pNext != NULL)
	{
		if (p->pNext->num == x)
		{
			flg = 1;
			p->pNext->num = y;
			cout << "替换成功！" << endl;
		}
		p = p->pNext;
	}
	if (flg == 0)
		cout << "输入错误，要替换的值不存在" << endl;
	cout << "请按任意键继续！" << endl;
	getchar();
}

void List::Destory(point pHead)
{
	point p = pHead->pNext;
	while (pHead->pNext != NULL)
	{
		delete pHead;
		pHead = p;
		p = p->pNext;
	}
	cout << "删除链表成功" << endl;
	cout << "请按任意键继续！" << endl;
	getchar();
	return;
}
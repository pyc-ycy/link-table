#pragma once
#include"pch.h"
#include"cNode.h"
#include<iostream>
using namespace std;
typedef cNode *point;
class List
{
public:
	List() 
	{ 
		cout << "欢迎使用链表类" << endl;
		cout << "请按任意键继续！" << endl;
	}
	void Create(point &pHead);//创建一个链表
	point Array(point pHead, int n[], int k);//初始化链表
	point Sort(point pHead);//链表排序
	void Insert(point pHead, int num);
	void Print(point pHead);
	void Delete(point pHead, int n);//在链表中删除某个数值
	void Find(point pHead, int n);//在链表中查找某个数值
	void Instead(point pHead, int x, int y);//在链表中替换某个数值，用y替换x
	void Destory(point pHead);//删除链表
	
};

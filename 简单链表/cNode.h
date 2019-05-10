#pragma once
#include"pch.h"

class cNode //指针类
{
public:
	int num;  //数据域
	bool use;
	cNode *pNext;  //指向下一节点
	cNode *prev;
};
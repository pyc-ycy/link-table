// 简单链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<cstdlib>
#include"list.h"
using namespace std;
typedef cNode *point;


void Menu()
{
	cout << "=================================" << endl;
	cout << "             控制面板            " << endl;
	cout << '\t' << "指令" << '\t' << "功能" << endl;
	cout << '\t' << "1" << '\t' << "创建链表" << endl;
	cout << '\t' << "2" << '\t' << "初始化链表" << endl;
	cout << '\t' << "3" << '\t' << "排序" << endl;
	cout << '\t' << "4" << '\t' << "插入" << endl;
	cout << '\t' << "5" << '\t' << "查找" << endl;
	cout << '\t' << "6" << '\t' << "替换" << endl;
	cout << '\t' << "7" << '\t' << "删除" << endl;
	cout << '\t' << "8" << '\t' << "输出" << endl;
	cout << '\t' << "9" << '\t' << "清空" << endl;
	cout << '\t' << "0" << '\t' << "退出" << endl;
	cout << "=================================" << endl;
}
int *CreatArray(int &x)
{
	int n;
	cout << "请输入数组长度：";
	cin >> n;
	x = n;
	int *a = new int[n];
	cout << "请输入数组元素" << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	return a;
}


point a;
List list;
int main()
{
	int key = 1;
	while (key)
	{
		getchar();
		system("cls");
		Menu();
		int clc;
		cin >> clc;
		switch (clc)
		{
		case 1:		list.Create(a); break;
		case 2:
				{
					int k;
					int *t = CreatArray(k);
					list.Array(a, t,k);
					break;
				}
		case 3:
			list.Sort(a); break;
		case 4: {
					int x;
					cout << "请输入要插入的值：" << endl;
					cin >> x;
					list.Insert(a, x);
					break;
				}
		case 5:
				{
					int x;
					cout << "请输入要查找的值：";
					cin >> x;
					list.Find(a, x);
					break;
				}
		case 6:
				{
					int x, y;
					cout << "请输入x 和y,注意是y替换x:";
					cin >> x >> y;
					list.Instead(a, x, y);
					break;
				}
		case 7:
				{
					int x;
					cout << "请输入你要删除的值：";
					cin >> x;
					list.Delete(a, x);
					break;
				}
		case 8:
				{
					list.Print(a); break;
				}
		case 9:
			list.Destory(a); break;
		case 0:
			key = 0;
		}
	}
	return 0;
}


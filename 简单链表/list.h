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
		cout << "��ӭʹ��������" << endl;
		cout << "�밴�����������" << endl;
	}
	void Create(point &pHead);//����һ������
	point Array(point pHead, int n[], int k);//��ʼ������
	point Sort(point pHead);//��������
	void Insert(point pHead, int num);
	void Print(point pHead);
	void Delete(point pHead, int n);//��������ɾ��ĳ����ֵ
	void Find(point pHead, int n);//�������в���ĳ����ֵ
	void Instead(point pHead, int x, int y);//���������滻ĳ����ֵ����y�滻x
	void Destory(point pHead);//ɾ������
	
};

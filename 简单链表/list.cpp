#include"pch.h"
#include"list.h"
#include<iostream>
using namespace std;

void List::Create(point &pHead)//����һ������
{
	pHead = new cNode;
	pHead->num = -1;
	pHead->use = false;
	pHead->pNext = NULL;
	cout << "�����ɹ�!" << endl;
	cout << "�밴�����������" << endl;
	getchar();
	return;
}

point List::Array(point pHead, int n[],int k)
{
	
	point p = pHead;
	for (int i = 0; i < k; i++)
	{
		point pop = new cNode;//�½�һ���ڵ�
		pop->num = n[i];
		pop->pNext = nullptr;
		p->pNext = pop;
		p = pop;
	}
	cout << "��ʼ���ɹ�" << endl;
	cout << "�밴�����������" << endl;
	getchar();
	return pHead;
}
point List::Sort(point pHead)
{
	if (pHead == NULL || pHead->pNext == NULL)return pHead;//����Ϊ�գ���������ֻ��һ������ʱ��ֱ�ӷ���

	point p = pHead->pNext, pstart = new cNode, pend = pHead;//����һ��ͷ����β�ڵ�

	pstart->pNext = pHead; //Ϊ�˲������㣬���һ��ͷ���

	while (p != NULL)

	{

		point tmp = pstart->pNext, pre = pstart;//����һ����ʱָ���Ŵ��ƶ�λ�õ����ݵ�ָ�룬����һ��ָ��ר�������ƶ��ڵ�

		while (tmp != p && p->num >= tmp->num) //�ҵ�����λ��

		{
			tmp = tmp->pNext; pre = pre->pNext;//����ǰ�ڵ��Ƶ���һ�ڵ�
		}

		if (tmp == p)pend = p;//����ʱָ�����������

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
	cout << "����ɹ�" << endl;
	cout << "�밴�����������" << endl;
	getchar();
	return pHead;
}

void List::Insert(point pHead, int num)
{
	//�������в�������
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
	cout << "����ɹ�" << endl;
	cout << "�밴�����������" << endl;
	getchar();
	return;

}
void List::Print(point pHead)
{
	//�������
	cout << "�����е������";
	int flg = 0;
	while (pHead->pNext != NULL)
	{
		flg = 1;
		pHead = pHead->pNext;
		cout << pHead->num << " ";
	}
	if (flg==0)
		cout << "����Ϊ��!" << endl;
	cout << "�밴�����������" << endl;
	getchar();
}
void List::Delete(point pHead, int n)//��������ɾ��ĳ����ֵ
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
				cout << "ɾ���ɹ�!" << endl;
				break;
			}
			else
			{
				p->pNext = p->pNext->pNext;
				cout << "ɾ���ɹ�!" << endl;
				break;
			}
		}
		p = p->pNext;
	}
	if (!flg)
		cout << "�������Ҫɾ����ֵ�����ڣ�" << endl;
	cout << "�밴�����������" << endl;
	getchar();
}

void List::Find(point pHead, int n)//�������в���ĳ����ֵ
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
		cout << n << " ����ֵ�������е�λ��" << size << " " << p << endl;
	else
		cout << n << " ������󣬸�ֵ�������в�����" << endl;
	cout << "�밴�����������" << endl;
	getchar();
}

void List::Instead(point pHead, int x, int y)//���������滻ĳ����ֵ����y�滻x
{
	point p = pHead;
	int flg = 0;
	while (p->pNext != NULL)
	{
		if (p->pNext->num == x)
		{
			flg = 1;
			p->pNext->num = y;
			cout << "�滻�ɹ���" << endl;
		}
		p = p->pNext;
	}
	if (flg == 0)
		cout << "�������Ҫ�滻��ֵ������" << endl;
	cout << "�밴�����������" << endl;
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
	cout << "ɾ������ɹ�" << endl;
	cout << "�밴�����������" << endl;
	getchar();
	return;
}
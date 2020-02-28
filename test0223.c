#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typedef struct Teacher
//{
//	char name[20];
//	int id;
//	char *p;
//	char **p2;
//	Student s1;
//	Student* p3;
//
//}Teacher;
//
//typedef struct Student
//{
//	char name[20];
//	int id;
//}Student;
//int main()
//{
//	Teacher t1;
//
//	return 0;
//}
//
//
//typedef struct Teacher
//{
//	int data;
//	struct Teacher* next;
//
//}Teacher;
//Teacher* CreatList()
//{
//	Teacher t1, t2, t3;
//	Teacher* p = NULL;
//	t1.data = 1;
//	t2.data = 2;
//	t3.data = 3;
//
//	t1.next = &t2;
//	t2.next = &t3;
//	t3.next = NULL;
//
//	p = &t1;
//	while (p)
//	{
//		printf("data:%d\n", p->data);
//		p = p->next;
//	}
//
//	return &t1;
//}
//void main()
//{
//	Teacher* head = CreatList();
//	return;
//
//}

typedef struct Node
{
	int data;
	struct Node* next;
}SLIST;
SLIST* SList_Creat();//��������
int Slist_Print(SLIST* pHead);//��������
int Slist_NodeInsert(SLIST* pHead, int x, int y);//����ֵ ��xǰ����y
int Slist_NodeDel(SLIST* pHead, int y);
int Slist_Destory(SLIST* pHead);

SLIST* SList_Creat()
{
	SLIST* pHead, * pM, * pCur;
	int data = 0;
	//����ͷ��㲢��ʼ��
	pHead = (SLIST*)malloc(sizeof(SLIST));
	if (pHead == NULL)
	{
		return NULL;
	}
	pHead->data = 0;
	pHead->next = NULL;
	printf("\nplease enter your data:");
	scanf("%d", &data);

	pCur = pHead;

	while (data != -1)
	{
		//1.���Ͻ������� malloc�½ڵ�
		pM = (SLIST*)malloc(sizeof(SLIST));
		if (pM == NULL)
		{
			return NULL;
		}
		pM->data = data;
		pM->next = NULL;

		//2.�½ڵ� ������
		pCur->next = pM;
		//3.�½ڵ��ɵ�ǰ�ڵ�
		pCur = pM;//����ڵ��β��׷��
		printf("\nplease enter your data:");
		scanf("%d", &data);

	}
	return pHead;
}
int Slist_Print(SLIST* pHead)
{
	SLIST* tem = NULL;
	if (pHead == NULL)
	{
		return -1;
	}
	tem = pHead->next;
	printf("\nBigin\t");
	while (tem)
	{
		printf("%d\t", tem->data);
		tem = tem->next;
	}
	printf("\tEnd");
	return 0;
}
int Slist_NodeInsert(SLIST* pHead, int x, int y)
{
	SLIST * pM,*pCur,*pPre;
	int data;
	pM = (SLIST*)malloc(sizeof(SLIST));
	if (pM == NULL)
	{
		return -1;
	}
	pM->next = NULL;
	pM->data = y;

	//��������
	pPre = pHead;
	pCur = pHead->next;

	while(pCur)
	{
		if (pCur->data == x)
		{
			break;
		}
		pPre = pCur;
		pCur = pCur->next;

	}
	//���½ڵ����Ӻ�������
	pM->next = pPre->next;
	//��ǰ���ڵ������½ڵ�
	pPre->next = pM;
	return 0;
}
int Slist_NodeDel(SLIST* pHead, int y)
{
	SLIST *pCur, *pPre;
	int data = 0;
	//��ʼ��
	pPre = pHead;
	pCur = pHead->next;

	while (pCur!=NULL)
	{
		if (pCur->data == y)
		{
			break;
		}
		pPre = pCur;
		pCur = pCur->next;

	}
	//ɾ������
	if (pCur == NULL)
	{
		printf("û���ҵ�ֵΪ%d�Ľ��\n", y);
		return -1;
	}
	pPre->next = pCur->next;
	if (pCur != NULL)
	{
		free(pCur);

	}
	return 0;
}
int Slist_Destory(SLIST* pHead)
{
	SLIST* pM, * pPre, * pCur;
	SLIST* tem = NULL;
	if (pHead == NULL)
	{
		return -1;
	}
	
	while (pHead!=NULL)
	{
		tem = pHead->next;
		free(pHead);
		pHead = tem;
	}
	return 0;
}
int Slist_Reverse(SLIST* pHead)
{
	SLIST* p;//ǰ���ڵ�
	SLIST* q;//��ǰ�ڵ�
	SLIST* t;//����Ľڵ�
	if (pHead == NULL||pHead->next==NULL||pHead->next->next==NULL)
	{
		return 0;
	}
	//��ʼ�� //ǰ���ڵ�
	p = pHead;
	q = pHead->next;
    //һ���ڵ�һ���ڵ�����
	while (p)
	{
		t = q->next;//������������
		q->next = p;//����
		p = q;//��p����
		p = t;
	}
	//ͷ�����β���ڵ�� ��NULL
	pHead->next->next = NULL;
	pHead->next = p;

	return 0;
}
int main()
{
	int ret = 0;

	SLIST* pHead = NULL;
	pHead = SList_Creat();
	ret = Slist_Print(pHead);

	ret = Slist_NodeInsert(pHead, 20, 19);
	ret = Slist_Print(pHead);

	ret = Slist_NodeDel(pHead, 19);
	ret = Slist_Print(pHead);

	ret = Slist_Reverse(pHead);
	ret = Slist_Print(pHead);

	Slist_Destory(pHead);
	return 0;
}
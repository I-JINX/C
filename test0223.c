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
SLIST* SList_Creat();//创建链表
int Slist_Print(SLIST* pHead);//遍历链表
int Slist_NodeInsert(SLIST* pHead, int x, int y);//插入值 在x前插入y
int Slist_NodeDel(SLIST* pHead, int y);
int Slist_Destory(SLIST* pHead);

SLIST* SList_Creat()
{
	SLIST* pHead, * pM, * pCur;
	int data = 0;
	//创建头结点并初始化
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
		//1.不断接收输入 malloc新节点
		pM = (SLIST*)malloc(sizeof(SLIST));
		if (pM == NULL)
		{
			return NULL;
		}
		pM->data = data;
		pM->next = NULL;

		//2.新节点 入链表
		pCur->next = pM;
		//3.新节点变成当前节点
		pCur = pM;//链表节点的尾部追加
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

	//遍历链表
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
	//让新节点连接后续链表
	pM->next = pPre->next;
	//让前驱节点连接新节点
	pPre->next = pM;
	return 0;
}
int Slist_NodeDel(SLIST* pHead, int y)
{
	SLIST *pCur, *pPre;
	int data = 0;
	//初始化
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
	//删除操作
	if (pCur == NULL)
	{
		printf("没有找到值为%d的结点\n", y);
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
	SLIST* p;//前驱节点
	SLIST* q;//当前节点
	SLIST* t;//缓存的节点
	if (pHead == NULL||pHead->next==NULL||pHead->next->next==NULL)
	{
		return 0;
	}
	//初始化 //前驱节点
	p = pHead;
	q = pHead->next;
    //一个节点一个节点逆置
	while (p)
	{
		t = q->next;//缓冲后面的链表
		q->next = p;//逆置
		p = q;//让p下移
		p = t;
	}
	//头结点变成尾部节点后 置NULL
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
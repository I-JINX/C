#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"
void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data));
}
void ADDContact(Contact* pcon)
{
	assert(pcon);
	if (pcon->sz == MAX)
	{
		printf("通讯录已满\n");
		return;
	}
	//录入信息
	printf("请输入名字:");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("请输入年龄：");
	scanf("%d", pcon->data[pcon->sz].age);
	printf("请输入性别：");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("请输入电话：");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("请输入地址：");
	scanf("%s", pcon->data[pcon->sz].addr);

	pcon->sz++;
	printf("增加成功\n");

}

void SHOWContact(Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\t\n","名字","年龄","性别","电话","地址");
	for (i = 0; i <pcon->sz ; i++)
	{
		printf("%15s\t%5s\t%5s\t%12s\t%20s\t\n",
			pcon->data[i].name, 
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);

	}

}
static int FindByName(Contact* pcon, char name[])
{
	int i = 0;
	assert(pcon);
	for(i=0;i<pcon->sz;i++)
	{
		if (strcmp(pcon->data[i].name, name))
		{
			return i;
		}
	}
	//找不到
	return -1;
}

void DELContact(Contact* pcon)
{
	int i = 0;
	char name[NAME_MAX] = { 0 };
	assert(pcon);
	int pos = 0;
	if(pcon->sz==0)
	{
		printf("通讯录为空");
		return;
	}
	//删除
	printf("请输入要删除联系人的姓名：");
	scanf("%s", name);
	//查找
	pos = FindByName(pcon, name);
	if(pos=-1)
	{
		printf("要删除的人不存在");
		return;
	}
	//移除
	for (i = pos; i <pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("删除成功\n");
}












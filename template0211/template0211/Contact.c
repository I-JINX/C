#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"
void LoadContact(Contact* pcon)
{
	PeoInfo tem = { 0 };
	FILE* pfRead = fopen("Contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("������Ϣ�����ļ�ʧ��");
		return;
	}
	//������Ϣ
	while (fread(&tem, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(pcon);
		pcon->data[pcon->sz] = tem;
		pcon->sz++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	//memset(pcon->data, 0, sizeof(pcon->data));
	pcon->data = (PeoInfo*)calloc(DEDAULT_SZ, sizeof(PeoInfo));
	if (pcon->data == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pcon->capacity = DEDAULT_SZ;
	//�����ļ�
	LoadContact(pcon);
}
void DestroyContact(Contact* pcon)
{
	free(pcon->data);
	pcon->data = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}
//void ADDContact(Contact* pcon)
//{
//	assert(pcon);
//	if (pcon->sz == MAX)
//	{
//		printf("ͨѶ¼����\n");
//		return;
//	}
//	//¼����Ϣ
//	printf("����������:");
//	scanf("%s", pcon->data[pcon->sz].name);
//	printf("���������䣺");
//	scanf("%d", pcon->data[pcon->sz].age);
//	printf("�������Ա�");
//	scanf("%s", pcon->data[pcon->sz].sex);
//	printf("������绰��");
//	scanf("%s", pcon->data[pcon->sz].tele);
//	printf("�������ַ��");
//	scanf("%s", pcon->data[pcon->sz].addr);
//
//	pcon->sz++;
//	printf("���ӳɹ�\n");
//
//}
void CheckCapacity(Contact* pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//����
		PeoInfo* ptr = realloc(pcon->data, (pcon->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity += 2;
			printf("���ݳɹ�\n");
		}
	}
}
void ADDContact(Contact* pcon)
{
	assert(pcon);
	CheckCapacity(pcon);

	//¼����Ϣ
	printf("����������:");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("���������䣺");
	scanf("%d", pcon->data[pcon->sz].age);
	printf("�������Ա�");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("������绰��");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("�������ַ��");
	scanf("%s", pcon->data[pcon->sz].addr);

	pcon->sz++;
	printf("���ӳɹ�\n");

}
void SHOWContact(Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pcon->sz; i++)
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
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].name, name))
		{
			return i;
		}
	}
	//�Ҳ���
	return -1;
}

void DELContact(Contact* pcon)
{
	int i = 0;
	char name[NAME_MAX] = { 0 };
	assert(pcon);
	int pos = 0;
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼Ϊ��");
		return;
	}
	//ɾ��
	printf("������Ҫɾ����ϵ�˵�������");
	scanf("%s", name);
	//����
	pos = FindByName(pcon, name);
	if (pos = -1)
	{
		printf("Ҫɾ�����˲�����");
		return;
	}
	//�Ƴ�
	for (i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n");
}

void SaveContact(Contact* pcon)
{
	int i = 0;
	FILE* pfWrite = fopen("Contact.dat", "wb");
	if (pfWrite = NULL)
	{
		printf("���ļ�ʧ��");
		return;
	}
	//������Ϣ
	for (i = 0; i < pcon->sz; i++)
	{
		fwrite(pcon->data + 1, sizeof(PeoInfo), 1, pfWrite);
	}
	

	//�ر��ļ�
}




#include <stdio.h>
#include <string.h>
#include <assert.h>
#define MAX 1000
#define NAME_MAX 25
#define SEX_MAX 5
#define ADDR_MAX 25 
#define TELE_MAX 12

//1000���˵���Ϣ
//���� �Ա� ���� ��ַ �绰
//��ɾ��� ��ʾ ����



//�˵���Ϣ
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//ͨѶ¼�ṹ��
typedef struct Contact
{
	PeoInfo data[MAX];//�����ʵ���ݵĿռ�
	int sz;//��¼��Ч���ݸ���
}Contact;


void InitContact(Contact* pcon);
void ADDContact(Contact* pcon);
void SHOWContact(Contact* pcon);
void DELContact(Contact* pcon);


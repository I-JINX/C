#include <stdio.h>
#include <string.h>
#include <assert.h>
#define MAX 1000
#define NAME_MAX 25
#define SEX_MAX 5
#define ADDR_MAX 25 
#define TELE_MAX 12

//1000个人的信息
//名字 性别 年龄 地址 电话
//增删查改 显示 排序



//人的信息
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

//通讯录结构体
typedef struct Contact
{
	PeoInfo data[MAX];//存放真实数据的空间
	int sz;//记录有效数据个数
}Contact;


void InitContact(Contact* pcon);
void ADDContact(Contact* pcon);
void SHOWContact(Contact* pcon);
void DELContact(Contact* pcon);


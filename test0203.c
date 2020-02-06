#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <limits.h>
//动态内存管理
//malloc
//free
//calloc
//realloc
//int main()
//{
//	//int arr[10]={0};
//	int i = 0;
//	int* p=(int)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for (i = 0; i <10 ; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int* p = (int)malloc(10 * sizeof(int));
//	int* ptr = NULL;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//调整空间
//	ptr=realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//		p = ptr;
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	if(p==NULL)
//	{
//		return 0;
//	}
//	*p = 10;
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
////void GetMemory(char **p)
////{
////	*p = (char*)malloc(100);
////}
//
//void test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	//GetMemory(&str);
//	strcmp(str, "hello world");
//	printf(str);
//	//free(str);
//	//str = NULL;	
//}
//char* GetMemory(void)
//{
//	//返回栈空间地址的问题
//	//char p[] = "hello world";//× p局部变量
//	char* p = "hello world";//√
//	return p;
//}
//void Test()
//{
//	char* str = NULL;
//	str=GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();//随机值
//	return 0;
//}
int test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	printf("%d", *p);
	//printf("hehe");
	//printf("%d",*p);
	return 0;
}


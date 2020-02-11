#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//柔性数组

//struct S2
//{
//	int num;
//	int arr[0];
//};

//struct S
//{
//	int num;
//	int arr[];//柔性数组成员
//};
//
//
//int main()
//{
//	int i = 0;
//	struct S* ps=(struct S*)malloc(sizeof(struct S)+20*sizeof(int));
//	ps->num = 20;
//	for (i = 0; i < 20; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	free(ps);
//	ps = NULL;
//	printf("%d", sizeof(struct S));
//	return 0;
//}

//struct S
//{
//	int num;
//	int* arr;
//};
//int main()
//{
//	int i = 0;
//	struct S* ps=(struct S*)malloc(sizeof(struct S));
//	ps->num = 20;
//	ps->arr = (int*)malloc(sizeof(int));
//	for (i = 0; i < 20; i++)
//	{
//		ps->arr[i] = i;
//	}
//		
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//
//	while (1)
//	{
//		printf("hheheh");
//		sleep(1000);
//	}
//	return 0;
//} 
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pf = ("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//写文件
//	fputs('p', pf);
//	fputc('u', pf);
//	fputc('t', pf);
//
//		
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	fputs('w', stdout);
//	return 0;
//}
//
//#include <string.h>
//#include <errno.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "张三",20,60.6f };
//	int ch = 0;
//	char buf[20] = 0;
//	FILE* pf = ("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	//ch=fgetc(pf);
//	//putchar(ch);
//	//ch = fgetc(pf);
//	//putchar(ch);
//	//ch = fgetc(pf);
//	//putchar(ch);
//	//forgets(buf, 20, pf);
//	//printf("%s",buf);
//	//写文件
//	//fputs("ddddd",pf);
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//	//关闭文件
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//#include <string.h>
//#include <errno.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "张三",20,60.6f };
//	int ch = 0;
//	char buf[20] = 0;
//	FILE* pf = ("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fwrite(&s, sizeof(s), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//
//#include <string.h>
//#include <errno.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "张三",20,60.6f };
//	int ch = 0;
//	char buf[20] = 0;
//	FILE* pf = ("test.txt", "b");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fread(&s, sizeof(struct Stu), 1, pf);
//	printf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//#include <string.h>
//#include <errno.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "张三",20,60.6f };
//	struct Stu tem = {0};
//	char buf[20] = 0;
//	//把结构体转化为字符串
//	sprintf(buf, "%s %d %f\n", s.name, s.age, s.score);
//	printf("%s\n", buf);
//	sscanf(buf, "%s %d %f\n", tem.name, &(tem.age), &(tem.score));
//	printf("%s %d %f\n", tem.name, tem.age, tem.score);
//	return 0;
//}
//
//#include <string.h>
//#include <errno.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	int ch = 0;
//	char buf[20] = { 0 };
//	FILE* pf = ("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//定位文件指针
//	fseek(pf, 2, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	  
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	int ch = 0;
	FILE* pfWrite = NULL;
	FILE* pfRead = fopen("test.txt", "r");
	if (pfRead == NULL);
	{
		return 0;
	}
	pfWrite = fopen("test2.txt", "w");
	if (pfWrite == NULL);
	{
		fclose(pfRead);
		return 0;
	}
	//拷贝数据
	while (ch = (fgetc(pfRead)) != EOF)
	{
		fputc(ch, pfWrite);
	}
	printf("%d",feof(pfRead));
	fclose(pfRead);
	fclose(pfWrite);
	pfRead = NULL;
	pfWrite = NULL;
	return 0;
}
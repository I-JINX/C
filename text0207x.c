#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//��������

//struct S2
//{
//	int num;
//	int arr[0];
//};

//struct S
//{
//	int num;
//	int arr[];//���������Ա
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
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
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
//	//д�ļ�
//	fputs('p', pf);
//	fputc('u', pf);
//	fputc('t', pf);
//
//		
//
//	//�ر��ļ�
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
//	struct Stu s = { "����",20,60.6f };
//	int ch = 0;
//	char buf[20] = 0;
//	FILE* pf = ("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	//ch=fgetc(pf);
//	//putchar(ch);
//	//ch = fgetc(pf);
//	//putchar(ch);
//	//ch = fgetc(pf);
//	//putchar(ch);
//	//forgets(buf, 20, pf);
//	//printf("%s",buf);
//	//д�ļ�
//	//fputs("ddddd",pf);
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//	//�ر��ļ�
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
//	struct Stu s = { "����",20,60.6f };
//	int ch = 0;
//	char buf[20] = 0;
//	FILE* pf = ("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//д�ļ�
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
//	struct Stu s = { "����",20,60.6f };
//	int ch = 0;
//	char buf[20] = 0;
//	FILE* pf = ("test.txt", "b");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
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
//	struct Stu s = { "����",20,60.6f };
//	struct Stu tem = {0};
//	char buf[20] = 0;
//	//�ѽṹ��ת��Ϊ�ַ���
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
//	//���ļ�
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//��λ�ļ�ָ��
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
	//��������
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
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//char arr[] = "192.168.0.1";
//	char arr[] = "mij@dsjj.sda";
//	char tem[] = { 0 };
//	char* sep = "@.";
//	char* ret = null;
//	strcpy(tem, arr);
//	//ret=strtok(tem, sep);
//	//printf("%s\n",ret);
//	//ret = strtok(null, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(null, sep);
//	//printf("%s\n", ret)；
//	for(ret=strtok(tem,sep);ret!=null;ret=strtok(null,sep))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
#include <errno.h>
//int main()
//{
//	printf("%s\n", strerror(errno));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//
//	return 0;
//}
//int main()
//{//打开文件
//	FILE* pf=fopen("test.txt","r" );
//	if(pf==NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//#include <ctype.h>
//int main()
//{
//	printf("%d\n", ispace(' a'));
//	printf("%d\n", isdigit(' a'));
//	return 0;
//}
#include <assert.h>
//void* my_memcpy(void* dest, const void* src,size_t count)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	while(count--)
//	{
//		
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//		//++(char*)dest;
//		//++(char*)src;
//	}
//	return ret;
//}
//void* my_memmove(void* dest, void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (count--)
//		{
//
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//			//++(char*)dest;
//			//++(char*)src;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//
//			*((char*)dest+count) = *((char*)src+count);
//		}
//	}
//	return ret;
//}
//int main()
//{    //strcpy
//	//int arr1[10] = { 0 };
//	//int arr2[] = { 0,1,2,3,4,5 };
//	//my_memcpy(arr1, arr2, 20);
//	//strncpy
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	//my_memcpy(arr + 2, arr, 16);
//	//memmove(arr + 2, arr, 16);
//	my_memmove(arr + 2, arr, 16);
//
//	return 0;
//}
// struct Node
//{
//	int data;
//	struct Node* next;
//};
//#pragma pack(2)//改对齐数 2的次方
//struct A
//{
//	char a1;//对齐数1 8 1
//	char a2;//对齐数1 8 1
//	int a;//对齐数4 8 4
//};
//#pragma pack()
//
//struct B
//{
//	char a1;
//	int a;
//	char a2;
//};
//struct S3  //16
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4 //对齐到最大对齐数整数倍
//{
//	char a1;
//	struct S3 s3;
//	double b;
//
//};

//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//	printf("%d\n", sizeof(struct B));//12
//	printf("%d\n", sizeof(struct S4));//	
//
//	return 0;
//}
//offsetof()
//
//#include <stddef.h>
//#define OffSetOf(s,m) ((size_t)&(((s*)0)->m))
//struct S
//{
//	char c1;//0
//	//1-3
//	int a;//4-7
//	char c2;//8
//	//9-11
//};
//int main()	
//{
//	printf("%d\n", offsetof(struct S,c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//
//	printf("%d\n", OffSetOf(struct S,c1));
//	printf("%d\n", OffSetOf(struct S, a));
//	printf("%d\n", OffSetOf(struct S, c2));
//
//	return 0;
//}
//位段
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	printf("%d", sizeof(struct S));
//	return 0;
//}
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}
//enum SEX
//{
//	MALE,
//    FAMALE,
//	SECRET
//};
//int main()
//{
//	enum SEX sex = SECRET;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FAMALE);//1
//	printf("%d\n", SECRET);//
//
//	return 0;
//}
//enum SEX
//{
//	MALE=8,
//    FAMALE=20,
//	SECRET
//};
//int main()
//{
//	enum SEX sex = SECRET;
//	printf("%d\n", MALE);
//	printf("%d\n", FAMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}
//void menu()
//{
//	printf("......1.ADD  2.SUB......");
//	printf("......3.MUL  4.DIV......");
//	printf("......    0.EXIT  ......");
//}
//enum Option
//{   
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//int main()
//{
//	int input;
//	do {
//		menu();
//		printf("choose:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			break;
//		case SUB:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}
//联合体--共用体共用同一块空间
//union U
//{
//	char c;//1
//  char a[5] = { 1 };
//	int a;//4
//};
//int main()
//{
//	union U u;
//	printf("%d", sizeof(u));//4
//	printf("%p", &u);
//	printf("%p", &(u.c));
//	printf("%p", &(u.a));
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	//00 00 00 01//大端
//	//01 00 00 00//小端
//	return *(char*)&a;//拿到第一个字节
//}
int check_sys()
{
	union
	{
		char c;
		int i;
	}u;
	u.i = 1;
	//返回0表示大端
	//返回1表示小端
	return u.i;
}
int main()
{
	
	int ret = check_sys();
    if(1==ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	//printf("%d\n",__STDC__);
//	return 0;
//}
//
//#define MAX 1000
//#define reg register
//
//int main()
//{
//	register int age;
//	reg int num;
//
//	return 0;
//}

//#define PINT int*
//typedef int* pint;
//
//int main()
//{
//	PINT a;
//	PINT b, c;//==int *b,c
//	pint d, e;
//	return 0;
//}


//#define do_forever for(;;)
//
//int main()
//{
//	//do_forever;==
//	//for (;;);
//	do_forever
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a++, b++);
//	int max = ((a++) > (b++) ? (a++) : (b++));
//	printf("%d\n", max);
//	return 0;
//}

#define MAX 4
//
//int main()
//{
//#if MAX==1
//	printf("hehe\n");
//#elif MAX==4
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//	return 0;
//
//}


int main()
{
#ifdef MAX
	printf("hehe\n");
#endif

#ifndef MAX
	print("haha\n");
#endif // !MAX

#if defined(MAX)
	printf("hehe\n");
#endif

#if !defined(MAX)
		printf("haha\n");
#endif
	return 0;
}
















#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//void swap1(int x,int y)
//{
//	int tem = x;
//	x = y;
//	y = tem;
//}
//void swap2(int *pa,int *pb)
//{
//	int tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d", a, b);
//	swap1(a, b);
//	printf("a=%d,b=%d", a, b);
//	swap2(&a,&b);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//int main()
//{
//	char arr[] = "aaaaaa";
//		memset(arr, 'b', 3);
//		printf("%s", arr);
//	return 0;
//}
//函数实现二分查找
//int binary_search(int arr[],int x,int sz)
//{
//	int left = 0;
//	int right = sz-1;//sizeof(arr) / sizeof(arr[0]) - 1;
//	//int mid = left + (left - right) / 2;
//	while (left <= right)
//	{
//		int mid = left + ( right-left) / 2;
//		if (arr[mid] > x)
//		{
//			right = mid -1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid +1;
//		}
//		else
//		{ return mid; }
//	}
//	return -1;
//}
//int main()
//{
//	int sz;
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int k=binary_search(arr, 7,sz);
//	if(-1==k)
//	{
//		printf("cann't find it\n");
//	}
//	else { printf("%d",k); }
//
//	return 0;
//}
//递归Print
// int Print(unsigned int x)
//{
//	if (x > 9)
//	{
//		Print(x / 10);
//	}printf("%d\n", x % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//    Print(num);
//	
//	return 0;
//}
int my_strlen(char* arr)
{
	int count = 0;
	while(*arr!='\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[] = "abcade";
	int len=my_strlen(arr);
	printf("%d", len);
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int bubble_sort(int* arr,int sz)
//{
//	int i = 0;
//	for(i=0;i<sz-1;i++)//冒泡排序趟数
//
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0;j<sz-i-1;j++)
//		{
//			if(arr[j]>arr[j+1])
//		 {
//			int tem = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tem;
//			flag = 0;
//         } 
//		}if (flag == 0)
//			break;
//	}
//}
//void print_arr(int* arr,int sz)
//{
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);//&arr与sizeof(arr)中arr表示整个数组，其它情况数组名表示数组首地址
	return 0;
}
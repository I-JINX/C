#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int Fac(int n)
//{ 
//	if (n <= 1)
//	return 1;
//	else
//	return n * Fac(n - 1); }
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int k = Fib(n);
//	printf("%d\n", k);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//p+i==arr+i;*(p+i)==*(arr+i)==arr[i]
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p  ===  p+%d=%p\n",i, &arr[i], i, p + i);
//	}
//	for(i=0;i<sz;i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i) = i);//arr[i]==*(arr+i) i[arr]==*(i+arr)
//	}
//	return 0;
//}
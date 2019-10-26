#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int my_strlen(char* arr)
//{
//	if(*arr=='\0')
//	{
//	return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcade";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
int Fac£¨int n£©
{ if (n <= 1)
return 1;
else
return n * Fac(n - 1); }
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac(n);
	printf("%d", ret);

	return 0;
}
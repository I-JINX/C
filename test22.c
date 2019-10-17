#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
	//int a[4][4], b[4][4], i, j;//4*4数组逆时针90°输出
	//printf("Input 16 number\n ");
	//for (i = 0; i < 4; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		scanf("%d", &a[i][j]);
	//		b[3-j][i] = a[i][j];
	//		
	//	}
	//}
	//printf("array is :");
	//for (i = 0; i < 4; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%3d", b[i][j]);
	//	}
	//}
	//int i,j, a[6][6];//直角杨辉三角
	//for (i=0; i <= 5; i++)
	//{
	//	a[i][i] =1;
	//	a[i][0] =1;
	//}
	//for (i = 2; i <= 5; i++)
	//{
	//	for(j=1;j<i;j++)
	//	{
	//		a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	//	}
	//}
	//for (i = 0; i <= 5; i++)
	//{
	//	for (j = 0; j <=i; j++)
	//	{
	//		printf("%4d",a[i][j]) ;
	//	}
	//	printf("\n");
	//}
	//float a[4][5],sum1,sum2;
	//int i, j;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//		scanf("%f", &a[i][j]);
	//}
	//for (i = 0; i < 3; i++)
	//{
	//	sum1 = 0;
	//	for (j = 0; j < 4; j++)
	//	{
	//		sum1 += a[i][j];
	//		a[i][4] = sum1 / 4;
	//	}
	//}
	//for (j = 0; j < 5; j++)

	//{
	//	sum2 = 0;
	//	for (i = 0; i < 3; i++)
	//	{
	//		sum2 += a[i][j];
	//		a[3][j] = sum2 / 3;
	//	}
	//}
	//for (i = 0; i < 4; i++)
	//{
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%6.2f", a[i][j]);
	//		printf("\n");
	//	}
	//}
	//int i = 0;//输入密码登录
	//char password[20] = { 0 };
	//for (i = 0; i < 3; i++)
	//{
	//	printf("input password:");
	//	scanf("%s", password);
	//	if (strcmp(password, "123456") == 0)
	//	{
	//		printf("landing success");
	//		break;
	//	}
	//	else
	//	{
	//		printf("password is error\n");
	//	}
	//	if (i == 3)
	//	{
	//		printf("tuichuchengxu");
	//	}
	//}
	//char arr1[] = "welcome to our home!!!! ";
	//char arr2[] = "########################";
	//int sz = 0;
	////sz = sizeof(arr1) / sizeof(arr1[0]);
	//sz = strlen(arr1);
	//int left = 0;
	//int right = sz-1;
	//while(left<=right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	left++;
	//	right--;
	//	Sleep(1000);
	//	system("cls");

	//}
//折半查找。
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int n = 7;
	//int left = 0;
	//int right = 0;
	//right = sizeof(arr) /sizeof(arr[0])-1;
	//while(left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if(arr[mid]=n)
	//{
	//	printf("%d", arr[mid]);
	//	break;
	//}
	//	else if(arr[mid]<n)
	//	{
	//		left = mid - 1;
	//	}
	//	else 
	//	{right = mid = 1; }
	//}
	//if(left>right)
	//{
	//	printf("Can find it\n");
	//}

void menu()
{
	printf("***************\n");
	printf("****1.play  ***\n");
	printf("****0.exit  ***\n");
}
void game()
{
	int num = 0;
	int ret = 0;
	ret = rand() % 100 + 1;//生成随机数
	//printf("%d", ret);
	while (1)
	{
		printf("input num\n");
		scanf("%d", &num);
		if (num < ret)
		{
			printf("num is smaller\n");
		}
		if (num > ret)
		{
			printf("num is larger\n");
		}
		else {
			printf("right\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("choose\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit game\n");
		default:
			printf("error\n");
			break;
		}
	} while (input);
	return 0;
}
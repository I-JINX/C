#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	//	int n = 0;
	//	int  i = 1;
	//	int x = 1;
	//	int sum = 0;
	//	for (n = 1; n <= 3; n++)
	//	{
	//		for (i = 1; i <= n; i++)
	//		{
	//			x *= i;
	//		}
	//		sum += x;
	//	}
	//	printf("%d", sum);
	//	return 0;
	//	�˷���
		//int i, j, result;
		//for (i = 1; i < 10; i++)
		//{
		//	for(j=1;j<10;j++)
			//{
			//	result = i * j;
				//printf("%d*%d=%-3d", i, j, result);
			//}
			//printf("\n");
		//}
		//101--200֮��������������
		//ָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ��.
		//int m, i, k, h = 0, leap = 1;
		//printf("\n");
		//for(m=101;m<=200;m++)
		//{
		//	k = sqrt(m + 1);//�Ǹ�ʵ����ƽ������
		//	for (i = 2; i <= k; i++)
		//	if(m%i==0)
		//	{
		//		leap = 0; break;
		//	}
		//	if(leap)
		//	{
		//		printf("%-4d", m); 
		//		h++;
		//		if (h % 10 == 0)
		//			printf("\n");
		//	}
		//	leap = 1;
		//}	
		//printf("\nthe total is%d", h);
		//sqrt����
		//int n = 16;
		//int x = 0;
		//x = sqrt(n);
		//printf("%d", x);
	//һ����ǡ�õ�����������֮�ͣ�������ͳ�Ϊ������1000��������������
	static int k[10];
	int i, j, n, s = 0;
	for (j = 2; j < 1000; j++);
	{
		n = -1;
	s = j;
	for (i = 1; i < j; j++)
	{
		if (j % i == 0)
		{
			n++;
			s = s - i;
			k[n] = i;//�˴���������0x002B5006 ��(λ�� template2.exe ��)�������쳣: 0xC0000005: д��λ�� 0x002BB000 ʱ�������ʳ�ͻ��
		}
	}
	if (s == 0)
	{
		printf("%dis a wanshu", j);
		for (i = 0; i < n; i++)

			printf("%d", k[i]);
		printf("%d\n", k[n]);
	}


	return 0;

	}
}
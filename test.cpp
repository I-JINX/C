#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h> 

#define m 50  //������������
#define n 50  //���������Դ��
int jinchengCount;
int ziyuanCount;
int r;
int max[m][n], allocation[m][n], need[m][n], available[n];
int i, j, p = 0, q = 0;
char c;
int request[m], allocation1[m][n], need1[m][n], available1[m];
void print()
{
	int i, j;
	printf("\n");
	printf("                                   ��ǰ��Դ�����                                \n");
	printf("-----------------------------------------------------------------------------------\n");
	printf("\n");
	printf("������/��  |    Max      | |  Allocation | |    Need    | |      Available     |\n");
	for (i = 0; i < jinchengCount; i++)
	{
		printf("    p%d/%d    ", i, i);

		for (j = 0; j < ziyuanCount; j++)
		{
			printf("  %d  ", max[i][j]);
		}

		for (j = 0; j < ziyuanCount; j++)
		{
			printf("  %d  ", allocation[i][j]);
		}

		for (j = 0; j < ziyuanCount; j++)
		{
			printf("  %d  ", need[i][j]);
		}
		if (i == jinchengCount / 2)
		{
			for (j = 0; j < ziyuanCount; j++)
			{
				printf("     %d ", available[j]);
			}
		}

		printf("\n");
		if (i < jinchengCount - 1)
			printf("--------------------------------------------------------\n");
		else
			printf("-----------------------------------------------------------------------------------\n");
	}
}
void menu()
{
	printf("*************************\n");
	printf("*******  1.start     *****\n");
	printf("*******  0.exit     *****\n");
	printf("*************************\n");

}
void check()   //��ȫ�㷨���� 
{
	int f;
	int v = 0;
	int work[m];//ϵͳ�ɼ����ṩ���������еĸ�����Դ����
	int a[m]; //ͳ�ư�ȫ����
	bool finish[m];
	r = 1;
	for (int p = 0; p < jinchengCount; p++)
		finish[p] = false;   // ��ʼ�����̾�û�õ��㹻��Դ�������  
	for (int q = 0; q < ziyuanCount; q++)
		work[q] = available[q];//work[q]��ʾ���ṩ���̼������еĸ�����Դ�� 

	int k = 0;
	int number = 0;
	for (k = 0; k < jinchengCount; k++)
	{
		for (int i = 0; i < jinchengCount; i++)
		{
			if (finish[i] == false)
			{
				f = 1;
				for (int j = 0; j < ziyuanCount; j++)
				{
					if (need[i][j] > work[j])
					{
						f = 0;
					}
				}
				if (f == 1)      //�ҵ���û�������need<work�Ľ���     
				{
					finish[i] = true;
					a[v++] = i;   //��¼��ȫ���к�
					number++;
					for (int h = 0; h < ziyuanCount; h++)
						work[h] += allocation[i][h];  //�ͷŸý����ѷ������Դ      
				}
			}
		}
		if (number == jinchengCount)
		{
			break;
		}


	}

	f = 1;
	for (int x = 0; x < jinchengCount; x++)    //�ж��Ƿ����н��̵�Finish��ΪTrue  
	{
		if (finish[x] == false)
		{
			f = 0;
			break;
		}
	}
	if (f == 0)       //���н��̵�FinishΪfalse����Ϊ����ȫ״̬
	{
		printf("ϵͳ���ڲ���ȫ״̬!");
		r = 0;
	}
	else
	{
		printf("\n");
		printf("-----------------------------------------------------------------------------------");
		printf("\nϵͳ��ǰΪ��ȫ״̬����ȫ����Ϊ��\n");
		for (int y = 0; y < jinchengCount; y++)
		{
			if (y < jinchengCount - 1)
				printf("p%d-> ", a[y]);  //�����ȫ����
			else
				printf("p%d", a[y]);
		}
		printf("\n");
		printf("-----------------------------------------------------------------------------------\n");
	}
	//******
	if (r == 1)  //��T0ʱ�̰�ȫ���������ִ��
	{
		do
		{
			q = 0;
			p = 0;
			printf("\n������������Դ�Ľ��̺ţ�");
			scanf("%d", &i);
			printf("\n������ý���������ĸ�����Դ��:");
			for (j = 0; j < ziyuanCount; j++)
				scanf("%d", &request[j]);
			for (j = 0; j < ziyuanCount; j++)
			{
				if (request[j] > need[i][j])
					p = 1;
			}       //�ж������Ƿ񳬹��ý�������Ҫ����Դ��     
			if (p == 1)
			{
				printf("������Դ������������Դ��������������!\n");
				//break;
			}
			else
			{
				for (j = 0; j < ziyuanCount; j++)
					if (request[j] > available[j])
						q = 1;    //�ж������Ƿ񳬹�������Դ��       
				if (q == 1)
				{
					printf("ϵͳ��Դ���㣬����ʧ�ܣ�\n");
					//break;
				}
				else //����С�ڵ���need��С��available      
				{

					for (j = 0; j < ziyuanCount; j++)
					{
						available1[j] = available[j];
						allocation1[i][j] = allocation[i][j];
						need1[i][j] = need[i][j];          //����ԭ�ѷ������Դ��������Ҫ����Դ���Ϳ��õ���Դ��    

						available[j] = available[j] - request[j];
						allocation[i][j] += request[j];
						need[i][j] = need[i][j] - request[j];  //ϵͳ�����Է���       
					}
					print();
					check();     //�������İ�ȫ��       
					if (r == 0)   //��������ϵͳ����ȫ      
					{
						for (j = 0; j < ziyuanCount; j++)
						{
							available[j] = available1[j];
							allocation[i][j] = allocation1[i][j];
							need[i][j] = need1[i][j];  //��ԭ�ѷ������Դ��������Ҫ����Դ���Ϳ��õ���Դ��        
						}
						printf("�����ϵͳ����ȫ���޷�����!ԭ��Դ��������£�\n");
						print();
						//break;
					}
					else
					{

						for (j = 0; j < ziyuanCount; j++)
						{

							available[j] = available[j];
							allocation[i][j] = allocation[i][j];
							need[i][j] = need[i][j];  //ȷ���ѷ������Դ��������Ҫ����Դ���Ϳ��õ���Դ�� 
						}
					
					}
				}
			}
			printf("\n�㻹Ҫ����������Y or N ?\n");        //�ж��Ƿ����������Դ����     
			scanf("%s", &c);
		} while (c == 'y' || c == 'Y');
	}

}


void init()
{
	int i = 0;
	int j = 0;
	printf("--------------------------------------------------------------------\n");
	printf("                             ���м��㷨                             \n");
	printf("--------------------------------------------------------------------\n");
	printf("�������������:\n");
	scanf("%d", &jinchengCount);
	printf("��������Դ������:\n");
	scanf("%d", &ziyuanCount);
	printf("������ϵͳ���õĸ�����Դ������������1*%d�ĸ�ʽ:\n", ziyuanCount);
	for (i = 0; i < ziyuanCount; i++)
	{
		scanf("%d", &available[i]);       //����ϵͳ�Ŀ�����Դ�� 
	}
	printf("������ÿ�����̶Ը�����Դ�����������������%d*%d�ĸ�ʽ:\n", jinchengCount, ziyuanCount);
	for (i = 0; i < jinchengCount; i++)
	{
		for (j = 0; j < ziyuanCount; j++)
			scanf("%d", &max[i][j]);  //����������̶Ը�����Դ�����������    
	}
	printf("������ÿ�������ѷ���ĸ�����Դ��������%d*%d�ĸ�ʽ:\n", jinchengCount, ziyuanCount);
	for (i = 0; i < jinchengCount; i++)
	{
		for (j = 0; j < ziyuanCount; j++)
			scanf("%d", &allocation[i][j]);
	}
	for (i = 0; i < jinchengCount; i++)
		for (j = 0; j < ziyuanCount; j++)
			need[i][j] = max[i][j] - allocation[i][j]; //����max��allocation�������need����

}
void start()
{
	init();
	print();
	check();
	print();
	
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			start();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

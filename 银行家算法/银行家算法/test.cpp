#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h> 

#define m 50  //设置最大进程数
#define n 50  //设置最大资源数
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
	printf("                                   当前资源分配表                                \n");
	printf("-----------------------------------------------------------------------------------\n");
	printf("\n");
	printf("进程名/号  |    Max      | |  Allocation | |    Need    | |      Available     |\n");
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
void check()   //安全算法函数 
{
	int f;
	int v = 0;
	int work[m];//系统可继续提供给进程运行的各类资源数量
	int a[m]; //统计安全序列
	bool finish[m];
	r = 1;
	for (int p = 0; p < jinchengCount; p++)
		finish[p] = false;   // 初始化进程均没得到足够资源数并完成  
	for (int q = 0; q < ziyuanCount; q++)
		work[q] = available[q];//work[q]表示可提供进程继续运行的各类资源数 

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
				if (f == 1)      //找到还没有完成且need<work的进程     
				{
					finish[i] = true;
					a[v++] = i;   //记录安全序列号
					number++;
					for (int h = 0; h < ziyuanCount; h++)
						work[h] += allocation[i][h];  //释放该进程已分配的资源      
				}
			}
		}
		if (number == jinchengCount)
		{
			break;
		}


	}

	f = 1;
	for (int x = 0; x < jinchengCount; x++)    //判断是否所有进程的Finish都为True  
	{
		if (finish[x] == false)
		{
			f = 0;
			break;
		}
	}
	if (f == 0)       //若有进程的Finish为false，则为不安全状态
	{
		printf("系统处在不安全状态!");
		r = 0;
	}
	else
	{
		printf("\n");
		printf("-----------------------------------------------------------------------------------");
		printf("\n系统当前为安全状态，安全序列为：\n");
		for (int y = 0; y < jinchengCount; y++)
		{
			if (y < jinchengCount - 1)
				printf("p%d-> ", a[y]);  //输出安全序列
			else
				printf("p%d", a[y]);
		}
		printf("\n");
		printf("-----------------------------------------------------------------------------------\n");
	}
	//******
	if (r == 1)  //若T0时刻安全则继续向下执行
	{
		do
		{
			q = 0;
			p = 0;
			printf("\n请输入请求资源的进程号：");
			scanf("%d", &i);
			printf("\n请输入该进程所请求的各类资源数:");
			for (j = 0; j < ziyuanCount; j++)
				scanf("%d", &request[j]);
			for (j = 0; j < ziyuanCount; j++)
			{
				if (request[j] > need[i][j])
					p = 1;
			}       //判断请求是否超过该进程所需要的资源数     
			if (p == 1)
			{
				printf("请求资源数大于所需资源数，请重新输入!\n");
				//break;
			}
			else
			{
				for (j = 0; j < ziyuanCount; j++)
					if (request[j] > available[j])
						q = 1;    //判断请求是否超过可用资源数       
				if (q == 1)
				{
					printf("系统资源不足，请求失败！\n");
					//break;
				}
				else //请求小于等于need且小于available      
				{

					for (j = 0; j < ziyuanCount; j++)
					{
						available1[j] = available[j];
						allocation1[i][j] = allocation[i][j];
						need1[i][j] = need[i][j];          //保存原已分配的资源数，仍需要的资源数和可用的资源数    

						available[j] = available[j] - request[j];
						allocation[i][j] += request[j];
						need[i][j] = need[i][j] - request[j];  //系统进行试分配       
					}
					print();
					check();     //检测分配后的安全性       
					if (r == 0)   //如果分配后系统不安全      
					{
						for (j = 0; j < ziyuanCount; j++)
						{
							available[j] = available1[j];
							allocation[i][j] = allocation1[i][j];
							need[i][j] = need1[i][j];  //还原已分配的资源数，仍需要的资源数和可用的资源数        
						}
						printf("分配后系统不安全，无法分配!原资源分配表如下：\n");
						print();
						//break;
					}
					else
					{

						for (j = 0; j < ziyuanCount; j++)
						{

							available[j] = available[j];
							allocation[i][j] = allocation[i][j];
							need[i][j] = need[i][j];  //确认已分配的资源数，仍需要的资源数和可用的资源数 
						}
					
					}
				}
			}
			printf("\n你还要继续分配吗？Y or N ?\n");        //判断是否继续进行资源分配     
			scanf("%s", &c);
		} while (c == 'y' || c == 'Y');
	}

}


void init()
{
	int i = 0;
	int j = 0;
	printf("--------------------------------------------------------------------\n");
	printf("                             银行家算法                             \n");
	printf("--------------------------------------------------------------------\n");
	printf("请输入进程总数:\n");
	scanf("%d", &jinchengCount);
	printf("请输入资源种类数:\n");
	scanf("%d", &ziyuanCount);
	printf("请输入系统可用的各类资源的数量，按照1*%d的格式:\n", ziyuanCount);
	for (i = 0; i < ziyuanCount; i++)
	{
		scanf("%d", &available[i]);       //输入系统的可用资源数 
	}
	printf("请输入每个进程对各类资源的最大需求数，按照%d*%d的格式:\n", jinchengCount, ziyuanCount);
	for (i = 0; i < jinchengCount; i++)
	{
		for (j = 0; j < ziyuanCount; j++)
			scanf("%d", &max[i][j]);  //输入各个进程对各个资源的最大需求数    
	}
	printf("请输入每个进程已分配的各类资源数，按照%d*%d的格式:\n", jinchengCount, ziyuanCount);
	for (i = 0; i < jinchengCount; i++)
	{
		for (j = 0; j < ziyuanCount; j++)
			scanf("%d", &allocation[i][j]);
	}
	for (i = 0; i < jinchengCount; i++)
		for (j = 0; j < ziyuanCount; j++)
			need[i][j] = max[i][j] - allocation[i][j]; //根据max、allocation矩阵计算need矩阵

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
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			start();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

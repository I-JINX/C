#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"
void menu()
{
	printf("*************************  ***\n");
	printf("***  1.add       2.del     ***\n");
	printf("***  3.search    4.modify  ***\n");
	printf("***  5.show      6.sort    ***\n");
	printf("***  0.exit                ***\n");
	printf("******************************\n");
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	//PeoInfo con[1000];
	//int sz = 0;
	Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("please choose:");
		scanf("%d", &input);
		switch(input)
		{
		case ADD:
			ADDContact(&con);
			break;
		case DEL:
			DELContact(&con);
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			SHOWContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("Exit successfully\n");
			break;
		default:
			printf("Selection error\n");
			break;
			
		}
	} while (input);
	return 0;
}
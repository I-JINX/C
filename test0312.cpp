#include <iostream>
using namespace std;
//
//struct Teacher
//{
//	char name[64];
//	int age;
//};
////�ڱ����ú��� ��ȡ��Դ
//int getTeacher(Teacher** p)
//{
//	Teacher* tem = NULL;
//	if (p == NULL)
//	{
//		return -1;
//	}
//	tem = (Teacher*)malloc(sizeof(Teacher));
//	if (tem == NULL)
//	{
//		return -2;
//	}
//	tem->age = 33;
//	//p��ʵ�εĵ�ַ *ʵ�ε�ַ ȥ����޸�ʵ��ֵ
//	*p = tem;
//}
//int getTeacher2(Teacher * &myp)//ָ������� ����������
//{
//	//��myp��ֵ�൱�ڸ�main��pT��ֵ
//	myp = (Teacher*)malloc(sizeof(Teacher));
//	if (myp == NULL)
//	{
//		return -1;
//	}
//	myp->age = 44;
//
//}
//void freeTeacher(Teacher* pT)
//{
//	if (pT == NULL)
//	{
//		return;
//	}
//	free(pT);
//	pT = NULL;
//}
//void main()
//{
//	Teacher* pT = NULL;
//	//1.c�����еĶ���ָ��
//	getTeacher(&pT);
//	cout << pT->age << endl;
//	void freeTeacher(Teacher * pT);
//
//	//2.c++�е�����(ָ�������)
//	getTeacher2(pT);
//	cout << pT->age << endl;
//
//	return;
//}

//
//void main()
//{
//	//��ͨ����
//	int a = 10;
//	int& b = a;
//
//	//������
//	int x = 20;
//	const int& y = x;//������ �ñ��� ����ֻ������ ����ͨ��Y�޸�X
//	//������ ��ʼ�� �������
//	int x = 20;
//	const int& y = x;//�ñ��� ��ʼ��
//
//	const int a = 40;//c++��a���ڷ��ű���
//	//int& m = 41;//�� ���������� ���������ڴ��ַ
//	const int& m = 43;	
//
//	return;
//}

//#define MYFUNC(a,b) ((a)<(b)?(a):(b))
//inline int myfunc(int a, int b)
//{
//	return a < b ? a : b;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 0;
//	c=myfunc(++a, b);
//	//c=MYFUNC(++a,b);
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	printf("c=%d\n", c);
//
//	return 0;
//}
//void myPrint(int x=3)
//{
//	cout << "x" << x << endl;
//}
////void myPrint1(int x = 3,int y=4,int m)//��
////{
//
////}
//void myPrint2(int m,int x = 3, int y = 4)//��
//{
//
//}
////����ռλ����
//void fun(int a, int b,int)
//{
//	cout << "a:" << a << " b:" << b << endl;
//}
//
////Ĭ�ϲ�����ռλ����
//void fun2(int a, int b, int = 3)
//{
//	cout << "a:" << a << "b:" << b << endl;
//}
//void main()
//{
//	myPrint(4);
//	myPrint();
//
//	//fun(1, 2);//��
//	fun(1, 2, 3);//���ñ���д������
//
//	fun2(1, 2);
//	fun(1, 2, 3);
//	return;
//}

//
//void myPrint(int a)
//{
//	printf("a:%d\n",a);
//}
//void myPrint(char *p)
//{
//	printf("p:%s\n", p);
//
//}
//void myPrint(int a,int b)
//{
//	printf("a:%d\n", a);
//	printf("b:%d\n", b);
//
//}
//
////int myPrint(int a, int b)//����ֵ�����жϺ������صı�׼
////{
////	printf("a:%d\n", a);
////	printf("b:%d\n", b);
//
////}
//void main()
//{
//	return;
//}

//����Ĭ�ϲ��� �ͺ������� ��һ��

void myfunc(int a, int b, int c = 10)
{
	printf("%d%d%%d", a, b, c);
}

void myfunc(int a, int b)
{
	printf("%d%d", a, b);
}

void main()
{
	//myfunc(1,2);//��������ʱ�����������

	return;
}





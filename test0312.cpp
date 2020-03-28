#include <iostream>
using namespace std;
//
//struct Teacher
//{
//	char name[64];
//	int age;
//};
////在被调用函数 获取资源
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
//	//p是实参的地址 *实参地址 去间接修改实参值
//	*p = tem;
//}
//int getTeacher2(Teacher * &myp)//指针的引用 做函数参数
//{
//	//给myp赋值相当于给main中pT赋值
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
//	//1.c语言中的二级指针
//	getTeacher(&pT);
//	cout << pT->age << endl;
//	void freeTeacher(Teacher * pT);
//
//	//2.c++中的引用(指针的引用)
//	getTeacher2(pT);
//	cout << pT->age << endl;
//
//	return;
//}

//
//void main()
//{
//	//普通引用
//	int a = 10;
//	int& b = a;
//
//	//常引用
//	int x = 20;
//	const int& y = x;//常引用 让变量 引用只读属性 不能通过Y修改X
//	//常引用 初始化 两种情况
//	int x = 20;
//	const int& y = x;//用变量 初始化
//
//	const int a = 40;//c++把a放在符号表中
//	//int& m = 41;//× 引用字面量 字面量无内存地址
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
////void myPrint1(int x = 3,int y=4,int m)//×
////{
//
////}
//void myPrint2(int m,int x = 3, int y = 4)//√
//{
//
//}
////函数占位参数
//void fun(int a, int b,int)
//{
//	cout << "a:" << a << " b:" << b << endl;
//}
//
////默认参数和占位参数
//void fun2(int a, int b, int = 3)
//{
//	cout << "a:" << a << "b:" << b << endl;
//}
//void main()
//{
//	myPrint(4);
//	myPrint();
//
//	//fun(1, 2);//×
//	fun(1, 2, 3);//调用必须写够参数
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
////int myPrint(int a, int b)//返回值不是判断函数重载的标准
////{
////	printf("a:%d\n", a);
////	printf("b:%d\n", b);
//
////}
//void main()
//{
//	return;
//}

//函数默认参数 和函数重载 在一起

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
	//myfunc(1,2);//函数调用时会产生二义性

	return;
}




